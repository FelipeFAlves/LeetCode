#include <bits/stdc++.h>
using namespace std;
int reverse(int x) {
    string resposta = to_string(x);
    if(resposta[0] == '-'){
        reverse(resposta.begin()+1,resposta.end());
    } else{
        reverse(resposta.begin(),resposta.end());
    }
    
    try{
        auto a = stoi(resposta);
        if(a < -2147483648 || a > 2147483648) return 0;
        else return a;
    } catch (...) {
        return 0;
    }
}
int main(){
    int a;
    a = reverse(123);
    return 0;
}