#include  <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* result = new ListNode();
    ListNode* atual = result;
    int aux = 0;
    while(l1 != NULL || l2 != NULL){
        ListNode* digito = new ListNode();
        int x =0;
        int y = 0;
        if(l1 !=NULL) x = l1->val;
        if(l2 != NULL) y = l2->val;
        int soma = x+y+aux;
        if(soma >=10){
            digito->val = soma%10;
            aux = soma/10;
        }  else {
            digito->val = soma;
            aux =0;
        }
        if(l1!=NULL) l1 = l1->next; 
        if(l2!=NULL) l2 = l2->next;
        atual->next = digito;
        atual = atual->next;
    }
    if(aux) atual->next = new ListNode(aux);
    return result->next;       
}
void percorreLista(ListNode* lista){
    while(lista != NULL){
        cout << lista->val << " ";
        lista = lista->next;
    }
}
int main(){
    ListNode* lista1 = new ListNode();
    ListNode* lista2 = new ListNode();
    auto ultimo = lista1;
    int l1[] = {9,9,9,9,9,9,9};
    int l2[] = {9,9,9,9};
    for(int i = 0; i < 7; i++){
        if(i == 0){
            lista1->val = l1[i];
        } else {
            ListNode* aux = new ListNode(l1[i]);
            ultimo->next = aux;
            ultimo = ultimo->next;
        }
    }
    ultimo = lista2;
    for(int i = 0; i < 4; i++){
        if(i == 0){
            lista2->val = l2[i];
        } else {
            ListNode* aux = new ListNode(l2[i]);
            ultimo->next = aux;
            ultimo = ultimo->next;
        }
    }
    auto resposta = addTwoNumbers(lista1,lista2);
    percorreLista(resposta);
    return 0;
}