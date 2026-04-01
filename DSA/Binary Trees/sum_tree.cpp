#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

// Building the tree using preorder traversal
Node* buildTree(const vector<int>& preorder, int &idx){
    idx++;

    if(idx >= (int)preorder.size() || preorder[idx] == -1){
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder, idx);
    root->right = buildTree(preorder, idx);

    return root;
}

void preOrder(Node* root){
    if(root == NULL){
        return;
    }

    cout << root->data <<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int SumTree(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftSum = SumTree(root->left);
    int rightSum = SumTree(root->right);

    root->data += leftSum + rightSum;
    return root->data ;
}

int main (){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    int idx = -1;

    Node* root = buildTree(preorder, idx);

    cout << "Before conversion : ";
    preOrder(root);
    cout << endl;

    int totalSum = SumTree(root);

    cout << "After conversion : ";
    preOrder(root);
    cout << endl;

    cout << "Total original tree sum: " << totalSum << endl;
    return 0;
}