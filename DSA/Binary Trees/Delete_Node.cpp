#include<iostream>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

Node* insert(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }
   
    if(val < root->data){
        root->left = insert(root->left, val);
    }
    else{
        root->right = insert(root->right, val);
    }

    return root;
}

Node* buildBST(vector<int> arr){
    Node* root = NULL;
    
    for(int i=0; i<arr.size(); i++){
        root = insert(root, arr[i]);
    }
    return root;
}

bool search(Node* root, int key){
    if(root == NULL){
        return false;
    }

    if(root->data == key){
        return true;
    }

    if(key < root->data){
        return search(root->left, key);
    }
    else{
        return search(root->right, key);
    }
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

Node* getInorderSuccessor(Node* root){
    while(root->left != NULL && root->right != NULL){
        root = root->left;
    }
    return root;
}

Node* delnode(Node* root, int key){
    if(root == NULL){
        return NULL;
    }

    if(key < root->data){
        root->left = delnode(root->left, key);
    }
    else if(key > root->data){
        root->right = delnode(root->right, key);
    }
    else{ // root == key
        if(root->left == NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else{
            Node* IS = getInorderSuccessor(root->right);
            root->data = IS->data;
            root->right = delnode(root->right, IS->data);
        }
    }
    return root;
}

int main(){
    vector<int> arr = {3, 2, 1, 5, 6, 4};

    Node* root = buildBST(arr);
    cout<< "Before Deletion: ";
    inorder(root);
    cout << endl;

    cout<< "After Deletion: ";
    delnode(root,6);
    inorder(root);
    cout<< endl;
}