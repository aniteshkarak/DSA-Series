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

/* Preorder Traversal */
void preorder(struct node* root) {
    if (root != NULL) {
        printf("%d ", root->data);   // Root
        preorder(root->left);        // Left
        preorder(root->right);       // Right
    }
}

/* Inorder Traversal */
void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);         // Left
        printf("%d ", root->data);   // Root
        inorder(root->right);        // Right
    }
}

/* Postorder Traversal */
void postorder(struct node* root) {
    if (root != NULL) {
        postorder(root->left);       // Left
        postorder(root->right);      // Right
        printf("%d ", root->data);   // Root
    }
}

int main() {

    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    printf("Preorder Traversal: ");
    preorder(root);

    printf("\nInorder Traversal: ");
    inorder(root);

    printf("\nPostorder Traversal: ");
    postorder(root);

    return 0;
}
