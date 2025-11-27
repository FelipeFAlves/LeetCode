#include <bits/stdc++.h>
using namespace std;
string achaPalin(const string& s, int esq, int dir) {
    while (esq >= 0 && dir < s.size() && s[esq] == s[dir]) {
        esq--;
        dir++;
    }
    return s.substr(esq + 1, dir - esq - 1); // volta ao passo anterior antes de sair do loop
}
string longestPalindrome(string s) {
    if(s.size() == 1) return s;
    string palinMax = ""; 
    for(int j=0;j<s.size();j++){
        auto maior = achaPalin(s,j,j);
        if(palinMax.size() < maior.size()) palinMax = maior;

        maior = achaPalin(s,j,j+1);
        if(palinMax.size() < maior.size()) palinMax = maior;
    } 
    return palinMax;
}

int main() {
    string s = "cbbd";
    auto a = longestPalindrome(s);
    cout << a << "\n";
    return 0;
}