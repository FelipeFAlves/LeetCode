#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    if(!nums1.size() && nums2.size()) nums1 = nums2;
    vector<int> resp; 
    int i=0;
    int j=0;

    while (i < nums1.size() && j < nums2.size()){
        if(nums1[i] <= nums2[j] && i < nums1.size()-n){
            resp.push_back(nums1[i]);
            i++;
        } else {
            resp.push_back(nums2[j]);
            j++;
        }
    }
    while(i < nums1.size()){
        if(i < nums1.size()-n) resp.push_back(nums1[i]);
        i++; 
    }

    while(j < nums2.size()){
        resp.push_back(nums2[j]);
        j++;
    }
    nums1 = resp;
}
int main(){
    vector<int> nums1 = {1,2,3,0,0};
    vector<int> nums2 = {2,5,6};
    return 0;
}