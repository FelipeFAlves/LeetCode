#include <bits/stdc++.h>
using namespace std;
// Lower bound
/*
y > 0.5*x + 7
y < x 
*/
int binarySearch(vector<int> &vetor,int star,int end, int x){
    if (star > end) return -1;
    int middle = (end + star) / 2;
    if(vetor[middle] == x) return middle;
    else if(vetor[middle] < x) return binarySearch(vetor,middle+1,end,x);
    else if(vetor[middle] > x) return binarySearch(vetor,star,middle-1,x);
    return 0;
}
int numFriendRequests(vector<int>& ages) {

    int totalRequests = 0;
    sort(ages.begin(),ages.end());
    for (int i = 0; i < ages.size(); i++) {
        int condition = (ages[i] * 0.5) +7;
        int indexI = upper_bound(ages.begin(),ages.end(),ages[i]) - ages.begin();
        // returns an iterator pointing to the first element in the range [first, last] that is greater than value
        int indexC = upper_bound(ages.begin(),ages.end(),condition) - ages.begin();
        // if(indexC == indexI) indexI++;
        totalRequests += max(0,indexI - indexC -1);
    }

    return totalRequests;
}

int main(){
    vector<int> ages = {20,30,100,110,120};
    cout << numFriendRequests(ages) << "\n";
    return 0;
}