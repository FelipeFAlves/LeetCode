#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubsequence(vector<int>& nums, int target) {
    int greatest = 0;
    vector<vector<int>> dp(nums.size(), vector<int>(target+1));

    for(int i=0;i<nums.size();i++){
        dp[i][0] = 0;
    }
    for(int i=0;i<nums.size();i++){
        for(int j=1;j<target+1;j++){
            if(i == 0){
                if(nums[i] == j) dp[i][j] = 1;
                else dp[i][j] = 0;
            } else {
                if(nums[i] == j){
                    if(dp[i-1][j] > 0) dp[i][j] = dp[i-1][j];
                    else dp[i][j] = 1;
                }
                else if(nums[i] > j) dp[i][j] = dp[i-1][j];
                else{ // Caso seja menor
                    int diff = j-nums[i];
                    int valor = dp[i-1][diff];
                    if(valor !=0 && dp[i-1][j] > valor+1) dp[i][j] = dp[i-1][j];
                    else if(valor !=0 && dp[i-1][j] <= valor+1)dp[i][j] = valor+1;
                    else if(valor==0)dp[i][j] = dp[i-1][j];
                }
            }
        }
    }
    
    greatest = dp[nums.size()-1][target];
    if(greatest == 0) return -1;
    else return greatest;       
}

int main(){
    vector<int> nums;
    int target;
    for(int i = 0; i < 6; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    // cout << "aaa" << "\n";
    cin >> target;
    cout << lengthOfLongestSubsequence(nums, target) << endl;

    return 0;
}