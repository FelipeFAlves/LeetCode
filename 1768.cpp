#include <bits/stdc++.h>
using namespace std;
string mergeAlternately(string word1, string word2) {
    string resp = "";
    int i=0;
    while (word1[i] && word2[i]){
        resp += word1[i];
        resp += word2[i];
        i++;
    }
    while( i < word1.size()){
        resp += word1[i];
        i++;
    }
    while(i < word2.size()){
        resp += word2[i];
        i++;
    }
    return resp;
}

int main(){
    string word1 = "abc";
    string word2 = "pqr";

    auto resp = mergeAlternately(word1,word2);
    cout << resp << "\n";


    return 0;
}