#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& numbers, int target) {
    int left =0, right = numbers.size()-1;
    vector<int> resp;
    while(right != left){
        int soma = numbers[left] + numbers[right];
        // cout << "numbers[left]: " << numbers[left] << ", numbers[right]: " << numbers[right] << ", soma: " << soma << endl;
        if (soma < target) left++;
        else if(soma > target) right--;
        else if(soma == target) {
            resp.push_back(left+1);
            resp.push_back(right+1);
            break;
        }
    }
    return resp;
}
int main(){
    vector<int> numbers = {2,7,11,15};
    auto resp = twoSum(numbers,9);
    for (int num : resp) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}