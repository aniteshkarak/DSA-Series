#include<iostream>
#include<vector>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

//Buliding the tree using preorder traversal
Node* buildTree(vector<int>& preorder, int& idx) {
    if(idx >= preorder.size() || preorder[idx] == -1) {
        idx++;
        return NULL;
    }
    
    Node* root = new Node(preorder[idx++]);
    root->left = buildTree(preorder, idx);
    root->right = buildTree(preorder, idx);
    
    return root;
}

//Inorder Traversal
void InOrder(Node* root){
    if(root == NULL) return;

    InOrder(root->left);
    cout << root->data << ", ";
    InOrder(root->right);
}

int main (){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    int idx = 0;
    Node* root = buildTree(preorder, idx);
    InOrder(root);
}