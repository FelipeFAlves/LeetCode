#include <bits/stdc++.h>
using namespace std;
int twoSum(vector<int> &nums,int target,int i){ //Busco a soma mais próxima possivel
    int left = i + 1, right = nums.size() - 1;
    int diffAnterior = nums[i] + nums[left] + nums[right];
    while (left<right) {
        int diffAtual = nums[i] + nums[left] + nums[right];
        if(abs(diffAtual - target) < abs(diffAnterior - target)) diffAnterior = diffAtual;
        if(diffAtual < target) left++;
        else if(diffAtual > target) right--;
        else return diffAtual; 
    }
    return diffAnterior;
}

int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    int resp = nums[0] + nums[1] + nums[2];;
    for(int i=0;i<nums.size() - 2;i++){ // Tem que ser menos 2 pra ter uma margem de utilizar 3 casas
        auto soma = twoSum(nums,target,i);
        if(abs(soma - target) < abs (resp - target)) resp = soma;
    }     
    return resp;
}

int main(){
    vector<int> nums = {-1,2,1,-4};
    auto resp = threeSumClosest(nums,1);
    cout << resp << "\n";


    return 0;
}


