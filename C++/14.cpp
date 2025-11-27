#include <bits/stdc++.h>
using namespace std;
// string longestCommonPrefix(vector<string>& strs) {
//     string res = "";
//     bool igual = true;
//     try{
//         int i=0;
//         while(strs[0][i]){
//             for(int j=1;j<strs.size();j++){
//                 if(strs[0][i] != strs[j][i]){
//                     igual = false; 
//                     break;
//                 } 
//             }
//             if(igual) res += strs[0][i];
//             else return res;
//             i++;
//         }
//     }
//     catch(const std::exception& e)
//     {
//         return res;
//     }
//     return res;
// }
string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";
    for (int i = 0; i < strs[0].size(); ++i) {
        char c = strs[0][i];
        for (int j = 1; j < strs.size(); ++j) {
            if (i >= strs[j].size() || strs[j][i] != c) {
                return strs[0].substr(0, i);
            }
        }
    }
    return strs[0];
}

int main(){
    vector<string> strs = {"ab","a"};
    auto resp = longestCommonPrefix(strs);
    cout << resp << "\n";
    return 0;
}