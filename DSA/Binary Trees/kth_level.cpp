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

void kthLevel(Node* root, int k){
    if(root == NULL) return;

    if(k == 0){
        cout << root->data << " ";
        return;
    }

    kthLevel(root->left, k-1);
    kthLevel(root->right, k-1);
}


int main (){
    vector<int> preorder = {1,2,7,-1,-1,-1,3,4,-1,-1,5,-1,-1};
    int idx = 0;
    Node* root = buildTree(preorder, idx);
    kthLevel(root, 3);
}