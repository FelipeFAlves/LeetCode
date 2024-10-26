#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverseList(ListNode* head) {
    ListNode* aux = head;
    vector<int> numeros;

    while (aux != nullptr) {
        numeros.push_back(aux->val);
        aux = aux->next;
    }

    if (numeros.empty()) {
        return nullptr;
    }

    ListNode* reverso = new ListNode(numeros[numeros.size() - 1]);
    aux = reverso;

    for (int i = numeros.size() - 2; i >= 0; i--) {
        aux->next = new ListNode(numeros[i]);
        aux = aux->next;
    }
    return reverso;
}

int main(){
    ListNode *head = new ListNode(1);
    auto aux = head;
    aux->next = new ListNode(2);
    aux = aux->next;
    aux->next = new ListNode(3);
    aux = aux->next;
    aux->next = new ListNode(4);
    aux = aux->next;
    aux->next = new ListNode(5);
    auto resp = reverseList(head);
    return 0;
}