#include <bits/stdc++.h>
using namespace std;
unordered_map<char,string> keyboard = {
    {'2', "abc"},
    {'3', "def"},
    {'4', "ghi"},
    {'5', "jkl"},
    {'6', "mno"},
    {'7', "pqrs"},
    {'8', "tuv"},
    {'9', "wxyz"}
};
void backtrack(int i, string stringAtual, int tam, string digits, vector<string>& comb){

    if(stringAtual.size() == tam){
        comb.push_back(stringAtual);
        return;
    } 
    if (i >= digits.size()) return;

    if (i + 1 < digits.size()) {
        auto eita = keyboard.find(digits[i+1]);
        if (eita != keyboard.end()) { 
            for(int j=0;j<eita->second.size();j++){
                backtrack(i+1, stringAtual + eita->second[j], tam, digits, comb);
            }
        }
    }
}

vector<string>  letterCombinations(string digits) {
    vector<string> comb;
    string jooj = "";
    if (digits == "") return comb;
    auto eita = keyboard.find(digits[0]);
    for(int i=0;i<eita->second.size();i++){
        backtrack(0,jooj+eita->second[i],digits.size(),digits,comb);
        // comb.push_back(resp);
    }
    // for (const auto& s : comb) {
    //     cout << s << " ";
    // }
    // cout << endl;

    return comb;
}
int main(){
    string teste = "234";
    auto resp = letterCombinations(teste);
    // cout << resp << "\n";
    return 0;
}