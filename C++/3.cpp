#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s) {
    int j =0;
    int max =0;
    int count =0;
    vector<pair<int,int>> valores(300, make_pair(0,0));
    while(s[j]){
        int num = s[j];
        if(!valores[num].first){
            valores[num].first = num;
            valores[num].second = j;
            count++;
            if(count >= max) max = count;
        } else {
            count =0;
            int aux = valores[num].second;
            fill(valores.begin(), valores.end(), make_pair(0,0));
            j = aux;
        }
        j++;
    }
    return max;
}

int main(){
    string s = "anviaj";
    auto resultado = lengthOfLongestSubstring(s);
    cout << resultado << "\n";
    return 0;
}