#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node* newNode(int value) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = value;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

/* Insert value in BST */
struct node* insert(struct node* root, int value) {

    if (root == NULL) {
        return newNode(value);   // create first node
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } 
    else {
        root->right = insert(root->right, value);
    }

    return root;
}

/* print tree (Inorder) */
void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {

    struct node* root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);

    printf("BST elements: ");
    inorder(root);

    return 0;
}
