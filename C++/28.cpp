#include <bits/stdc++.h>
using namespace std;
int strStr(string haystack, string needle) {
    auto resp = haystack.find(needle);
    if(resp != string::npos){
        return resp;
    } else return -1;
}
int main(){

    string haystack = "butsad";
    string neegle = "sxdaaa";
    auto resp = strStr(haystack,neegle);
    cout << resp << "\n";


    return 0;
}