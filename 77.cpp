#include <bits/stdc++.h>
using namespace std;

void backtrack(vector<int> &valores,vector<int> &atual,vector<vector<int>> &final, int k,int i){
    if(atual.size() == k){
        final.push_back(atual);
        return;
    }

    for(int j=i;j<valores.size();j++){
        atual.push_back(valores[j]);
        backtrack(valores,atual,final,k,j+1);
        atual.pop_back();
    }
}

vector<vector<int>> combine(int n, int k) {
    vector<int> bilada;
    vector<vector<int>> resp;
    for(int i=1;i<=n;i++){
        bilada.push_back(i);
    }        
    vector<int> atual;
    backtrack(bilada,atual,resp,k,0);

    // for (const auto &comb : resp) {
    //     for (int num : comb) {
    //         cout << num << " ";
    //     }
    //     cout << endl;
    // }
    return resp;
}


int main(){

    auto resp = combine(4,3);
    


    return 0;
}