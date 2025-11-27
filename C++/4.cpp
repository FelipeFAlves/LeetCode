#include <bits/stdc++.h>
using namespace std;
/*Mediana é um numero no centro de um grupo em que uma metade é maior e a outra é menor*/
/*Quando o numero de elementos é par, mediana é media dos 2 valores centrais*/
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> C;
    int i =0, j=0;
    while(i < nums1.size() && j < nums2.size()){
        if(nums1[i] < nums2[j]){
            C.push_back(nums1[i]);
            i++;
        }
        else{
            C.push_back(nums2[j]);
            j++;
        }
    }
    while(nums1[i]){
        C.push_back(nums1[i]);
        i++;
    }
    while(nums2[j]){
        C.push_back(nums2[j]);
        j++;
    }
    int n = C.size();
    if (n % 2 == 0) {
        return (C[n / 2 - 1] + C[n / 2]) / 2.0;
    } else {
        return C[n / 2];
    }
}


int main(){
    vector<int> nums1 = {1,3};
    vector<int> num2 = {2};
    auto resposta = findMedianSortedArrays(nums1,num2);
    cout << resposta << "\n";
    return 0;
}