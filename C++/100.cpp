#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool isSameTree(TreeNode* p, TreeNode* q) {
    if (p == nullptr && q == nullptr) {
        return true;
    }
    if (p == nullptr || q == nullptr) {
        return false;
    }
    if (p->val != q->val) {
        return false;
    }

    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}



int main(){

    srand(time(0));
    TreeNode* root = new TreeNode();
    // root->left = new TreeNode(12);
    // root->right = new TreeNode(52);
    // root->left->left = new TreeNode(781);
    // root->left->right = new TreeNode(81);
    // root->right->left = new TreeNode(5);

    TreeNode* c = new TreeNode();
    // c->left = new TreeNode(12);
    // c->right = new TreeNode(52);
    // c->left->left = new TreeNode(781);
    // c->left->right = new TreeNode(81);
    // c->right->left = new TreeNode(5);

    auto eita =isSameTree(root,c);
    cout << eita << "\n";


    return 0;
}