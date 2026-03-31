#include<iostream>
#include<vector>
#include<queue>
#include<map>
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

// Bottom view of a Binary tree
void bottamView(Node* root){
    if(root == NULL) return;

    queue<pair<Node*, int>> q;
    map<int, int> bottomNode; 

    q.push({root, 0});

    while(!q.empty()){
        Node* curr = q.front().first;
        int currHd = q.front().second;
        q.pop();

        // For bottom view, overwrite the value at each horizontal distance.
        bottomNode[currHd] = curr->data;

        if(curr->left != NULL){
            q.push({curr->left, currHd - 1});
        }

        if(curr->right != NULL){
            q.push({curr->right, currHd + 1});
        }
    }

    for(auto it : bottomNode){
        cout << it.second << " ";
    }
    cout << endl;
}

int main (){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    int idx = 0;
    Node* root = buildTree(preorder, idx);
    bottamView(root);
}