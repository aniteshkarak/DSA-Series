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

//Buliding the tree using preorder traversal
static int idx = -1;
Node* buildTree(vector<int> preorder){
    idx++;

    if(preorder[idx] == -1){
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

//sum of nodes
int sum(Node* root){
    if(root == NULL) return 0;
    int leftsum = sum(root -> left);
    int rightsum = sum(root -> right);

    cout << " Right sum: " << rightsum <<endl;
    return leftsum + rightsum  + root -> data;
}
int main (){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildTree(preorder);
    cout << "Sum of nodes in the tree is: " << sum(root) <<endl;

}