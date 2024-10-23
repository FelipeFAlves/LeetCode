#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
    int pos=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] != 0){ // Vai colocando os elem nas pos ignorando zero
            nums[pos] = nums[i]; 
            pos++;
        }
    }
    while(pos < nums.size()){
        nums[pos] = 0;
        pos++;
    }

    for(int i=0;i<nums.size();i++){
       cout << nums[i] << " ";
    }    
}

int main(){
    vector<int> nums = {0,1,0};
    moveZeroes(nums);
    return 0;
}