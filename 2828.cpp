#include <bits/stdc++.h>
using namespace std;
bool isAcronym(vector<string>& words, string s) {
    int j=0;
    if(words.size() != s.size()) return false;
    while(s[j]){
        if(words[j][0] != s[j]) return false;
        j++;
    }
    return true;
}
int main(){
    string s = "ngguoy";
    vector<string> words = {"never","gonna","give","up","on","you"};
    auto resultaod = isAcronym(words,s);
    cout << resultaod << "\n";

    return 0;
}