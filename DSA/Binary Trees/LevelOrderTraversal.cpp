#include<iostream>
#include<vector>
#include<queue>
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

//Building the tree using preorder traversal
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

//Level Order Traversal
void LevelOrder(Node* root){
    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int size = q.size();
        for(int i = 0; i < size; i++){
            Node* curr = q.front();
            q.pop();
            cout << curr->data << " ";
            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
        cout << endl;
    }
}


int main (){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    int idx = 0;
    Node* root = buildTree(preorder, idx);
    LevelOrder(root);
}