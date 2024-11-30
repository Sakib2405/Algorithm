#include <iostream>
using namespace std;

// Define the structure for a node in the binary tree
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

// In-order traversal: Left -> Root -> Right
void inOrderTraversal(Node* node) {
    if (node == nullptr) return;
    inOrderTraversal(node->left);      // Visit left subtree
    cout << node->data << " ";         // Visit the root node
    inOrderTraversal(node->right);     // Visit right subtree
}
int main() {
    // Constructing a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "In-order traversal: ";
    inOrderTraversal(root);
    cout << "\n";
        return 0;
}
