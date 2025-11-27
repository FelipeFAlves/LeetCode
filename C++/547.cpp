#include <bits/stdc++.h>
using namespace std;

void dfs(int u, int* visitado,vector<vector<int>>& isConnected){
    if(!visitado[u]){
        visitado[u] = 1;
        // cout << u+1 << " ";
        for(int v = 0; v < isConnected[u].size(); v++){
            if( isConnected[u][v] && !visitado[v]) dfs(v,visitado,isConnected);
        }
    }
}

int findCircleNum(vector<vector<int>>& isConnected) {
    int N = isConnected[0].size();
    int visitado[N];
    int qtd =0;
    memset(visitado,0,sizeof(visitado));
    for(int i=0;i<isConnected.size();i++){
        if(!visitado[i]){
            dfs(i,visitado,isConnected);
            qtd++;
        }
    }
    return qtd;
}

int main(){
    vector<vector<int>> isConnected = {{1,1,0},{1,1,0},{0,0,1}};
    int resp = findCircleNum(isConnected);
    cout << resp << "\n";

    return 0;
}