#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>  twoSum(vector<int>& nums,long long int target,int i){   
    vector<vector<int>> valores;
    int esq = i+1;
    int dir = nums.size()-1;
    while(esq < dir){
        int resultado = nums[esq] + nums[dir];
        if(resultado > target) dir--;
        else if(resultado < target) esq++;
        else {
            vector<int> temp;
            temp.push_back(nums[i]);
            temp.push_back(nums[esq]);
            temp.push_back(nums[dir]);
            valores.push_back(temp);
            while (esq < dir && nums[esq] == temp[1]) esq++; // eliminar valores iguais
        }
    }
    return valores;
}
vector<vector<int>> threeSum(vector<int>& nums,int target,int i){   
    vector<vector<int>> valores;
    for(i;i<nums.size();i++){
        long long int diff = static_cast<long long int>(target) - static_cast<long long int>(nums[i]);
        // if (i > 1 && nums[i] == nums[i - 1]) continue;
        auto resp = twoSum(nums,diff,i); 
        valores.insert(valores.end(), resp.begin(), resp.end());
    }
    return valores;
}

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    set<vector<int>> valores;
    vector<vector<int>> final;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        int busca = target - nums[i];
        
        auto resp = threeSum(nums, busca, i+1);
        for (auto& vec : resp) {
            vec.emplace(vec.begin(), nums[i]);
            valores.insert(vec);
        }
    }
    final.assign(valores.begin(), valores.end()); // Função nova que aprendi
    return final;
}

int main(){
    vector<int> nums = {1000000000,1000000000,1000000000,1000000000}; // Esse caso de teste está dando errado
    auto resp = fourSum(nums,-294967296);
    for (const auto& vec : resp) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}