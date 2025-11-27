#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    //valor / indice
    unordered_map<int,int> aux; // Isso é hash
    vector<int> resp;
    for(int i=0;i<nums.size();i++){
        int diff = target -nums[i];
        auto busca = aux.find(diff);
        if(busca == aux.end()){
            aux.insert(make_pair(nums[i],i));
        } else {
            resp.push_back(busca->second);
            resp.push_back(i);
            break;
        }
    }
    return resp;
}
int main(){
    vector<int> nums = {2,7,11,15};
    auto res = twoSum(nums,9);
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}