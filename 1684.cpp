#include <bits/stdc++.h>
using namespace std;
int countConsistentStrings(string allowed, vector<string>& words) {
    int count = 0;
    for(int i=0; i< words.size(); i++){
        int j=0;
        count++;
        while(words[i][j]){
            if(allowed.find(words[i][j]) == string::npos){
                count--;
                break;
            }
            j++;
        }
    }
    return count;      
}
int main (){
    string allowed = "abc";
    vector<string> words = {"a","b","c","ab","ac","bc","abc"};
    cout << countConsistentStrings(allowed,words) << "\n";
    return 0;
}