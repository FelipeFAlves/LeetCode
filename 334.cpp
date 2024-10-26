#include <bits/stdc++.h>
using namespace std;

bool increasingTriplet(vector<int>& nums) {
    if(nums.size() < 3) return false;
    int menor=nums[0],sMenor= INT_MAX;
    for(int i=1;i< nums.size();i++){
        if(nums[i] < menor){
            menor = nums[i];
        } else if(nums[i] > menor && nums[i] < sMenor){
            sMenor = nums[i];
        } else if(nums[i] > menor && nums[i] > sMenor) {
            return true;
        }
    }
    return false;     
}
int main(){
    vector<int> nums = {20,100,10,12,5,13};
    auto resp = increasingTriplet(nums);
    cout << resp << "\n";


    return 0;
}