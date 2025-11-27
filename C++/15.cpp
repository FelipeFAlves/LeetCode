#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> twoSum(vector<int>& nums, int target, int i) {
    vector<vector<int>> resp;
    int left = i + 1, right = nums.size() - 1; // Não se contar
    while (left < right) {
        int valor = nums[left] + nums[right];
        if (valor > target) right--;
        else if (valor < target) left++;
        else {
            vector<int> temp = {nums[i], nums[left], nums[right]};
            resp.push_back(temp);
            while (left < right && nums[left] == temp[1]) left++; // Eliminado duplicadas
        }
    }
    return resp;
}

vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> resultado;

    for (int i = 0; i < nums.size(); i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        auto teste = twoSum(nums, -nums[i],i);
        resultado.insert(resultado.end(), teste.begin(), teste.end());
    }
    return resultado;
}

int main(){
    vector<int> nums ={-1,0,1,2,-1,-4,-2,-3,3,0,4};
    auto a = threeSum(nums);

    return 0;
}