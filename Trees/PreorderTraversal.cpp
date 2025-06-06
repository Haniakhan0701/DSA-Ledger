// PreorderTraversal.cpp

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

void preorder(Node* root) {
    if (root == nullptr)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    // Creating the same tree as in BinaryTree.cpp
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Preorder Traversal: ";
    preorder(root); // Expected Output: 1 2 4 5 3

    return 0;
}
//command to run in bash
// g++ PreorderTraversal.cpp -o PreorderTraversal
//./PreorderTraversal