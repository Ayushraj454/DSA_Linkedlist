#include <bits/stdc++.h>
#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int v) {
        data = v;
        left = right = NULL;
    }
};

void printInorder(struct Node* node) {
    if (node == NULL)
        return;

    printInorder(node->left);
    cout << "" << node->data;
    printInorder(node->right);
}

void printPreorder(struct Node* node) {
    if (node == nullptr)
        return;

    cout << node->data << " ";
    printPreorder(node->left);
    printPreorder(node->right);
}

void printPostorder(struct Node* node) {
    if (node == nullptr)
        return;

    printPostorder(node->left);

    printPostorder(node->right);

    cout << node->data << " ";
}

int main() {
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    // Function call
    cout << "Inorder traversal of binary tree is: \n";
    printInorder(root);

    cout << "\nPreorder traversal of binary tree is: \n";
    printPreorder(root);

    cout << "\nPostorder traversal of binary tree is: \n";
    printPostorder(root);

    return 0;
}