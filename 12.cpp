#include <bits/stdc++.h>
using namespace std;

string add(int valor){
    vector<string> romanos = {"I","V","X","L","C","D","M"};
    vector<int> numeraris = {1,5,10,50,100,500,1000};
    string addiciona = "";
    int j = numeraris.size() - 1;
    while(j >= 0 && numeraris[j] > valor){
        j--;
    }
    if(j >= 0 && numeraris[j] == valor) addiciona += romanos[j];
    else if(j >= 0) addiciona += romanos[j];
    return addiciona;
}
string intToRoman(int num) {
    string parcial = to_string(num);
    string resultado = "";
    vector<string> romanos = {"I","V","X","L","C","D","M"};
    vector<int> numeraris = {1,5,10,50,100,500,100};
    int i=0;
    int digito = parcial.size()-1;
    
    while(parcial[i]){
        int pot = pow(10,digito);
        int numero = (parcial[i]-'0') * pot;
        if(digito == 3){
            for(int j=0;j<parcial[i]-'0';j++){
                resultado += "M";
            }
        } else if (digito == 1){
            if(numero != 40 && numero != 90 && numero != 0){
                string aux = add(numero);
                resultado += aux;
                auto it = find(romanos.begin(), romanos.end(),aux);
                int diff = it - romanos.begin();
                int qtd = (numero - numeraris[diff])/10;
                for(int j=0;j<qtd;j++){
                    resultado += "X";
                }
            } else {
                if(numero == 40){
                    resultado += "XL";
                } else if(numero == 90) {
                    resultado += "XC";
                }
            }
        } else if(digito == 2){
            if(numero != 400 && numero != 900 && numero != 0){
                string aux = add(numero);
                resultado += aux;
                auto it = find(romanos.begin(), romanos.end(),aux);
                int diff = it - romanos.begin();
                int qtd = (numero - numeraris[diff])/100;
                for(int j=0;j<qtd;j++){
                    resultado += "C";
                }
            } else {
                if(numero == 400){
                    resultado += "CD";
                } else if(numero==900){
                    resultado += "CM";
                }
            } 
        } else {
                if(numero != 4 && numero != 9 && numero != 0){
                    string aux = add(numero);
                    resultado += aux;
                    auto it = find(romanos.begin(), romanos.end(),aux);
                    int diff = it - romanos.begin();
                    int qtd = (numero - numeraris[diff])/1;
                    for(int j=0;j<qtd;j++){
                        resultado += "I";
                    }
                }else {
                if(numero == 4){
                    resultado += "IV";
                } else if(numero == 9) {
                    resultado += "IX";
                }
            } 
        }
        digito--;
        i++;
    }        
    return resultado;
}
int main(){
    int num = 100;
    auto resp = intToRoman(num);
    cout << resp << "\n";

    return 0;
}