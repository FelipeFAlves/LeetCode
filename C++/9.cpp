#include <bits/stdc++.h>
using namespace std;
//Essa é uma solução manipulando strings

// bool isPalindrome(int x) {
//     string resp = to_string(x);
//     int tam = resp.size() -1;
//     int i=0;
//     bool final = 1;
//     while(i < tam && tam >i){
//         if(resp[i] != resp[tam]) {
//             final = 0;
//             break;
//         }
//         i++;
//         tam--;
//     }
//     return final;
// }

//Solução numérica
bool isPalindrome(int x) {
    if(x < 0) return false;
    if(x >= 0 && x < 10) return true;
    long int original = x;
    long int reverso = 0;
    while(x > 0){   
        long int ultimo = x % 10;
        reverso = reverso * 10 + ultimo;
        x = x / 10;
    }
    return reverso == original;
}

int main(){
    int x =10;
    cout << isPalindrome(x) << "\n";
    return 0;
}