#include<bits/stdc++.h>
using namespace std;
string removeStars(string s) {
    auto acha = s.find("*");
    while(acha != string::npos){
        int aux = acha;
        s.erase(acha,1);
        while(aux > 0){
            if(s[aux-1] == '*') aux--;
            else {
                s.erase(aux-1,1);
                break;
            }
        } 
        acha = s.find("*");
    }
    return s;        
}
int main(){
    string s = "";
    auto resp = removeStars(s);
    cout << resp << "\n";
    return 0;
}