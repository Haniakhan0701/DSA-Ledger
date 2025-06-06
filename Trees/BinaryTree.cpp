// BinaryTree.cpp

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

int main() {
    // Creating nodes manually
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // Tree Structure:
    //       1
    //     /   \
    //    2     3
    //   / \
    //  4   5

    cout << "Binary Tree created successfully!" << endl;
    return 0;
} //command to run in bash 
// g++ BinaryTree.cpp -o BinaryTree
//./BinaryTree
