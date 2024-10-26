#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
    vector<int> diff1;
    vector<int> diff2;
    vector<vector<int>> resp;

    map<int,int> primeiro;
    map<int,int> segundo;
    for(auto it = nums1.begin();it != nums1.end();it++){
        primeiro.insert(*it,1);
    }

    for(auto it = nums2.begin();it != nums2.end();it++){
        segundo.insert(*it,1);
    }

    for(auto it = segundo.begin();it != segundo.end();it++){
        auto acha = primeiro.find(it->first);
        if(acha == primeiro.end()){
            diff2.push_back(it->first);
        } else {
            acha->second = 0;
        }
    }

    for(auto it = primeiro.begin();it != primeiro.end();it++){
        if(it->second) diff1.push_back(it->first);   
    }

    resp.push_back(diff1);
    resp.push_back(diff2);

    return resp;

}


int main(){
    vector<int> nums1 = {1,2,3};
    vector<int> nums2 = {2,4,6};
    auto resp = findDifference(nums1,nums2);

    return 0;
}