#include <iostream>
using namespace std;

// Define the structure for a node in the binary tree
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Pre-order traversal: Root -> Left -> Right
void preOrderTraversal(Node* node) {
    if (node == nullptr) return;
    cout << node->data << " ";        // Visit the root node
    preOrderTraversal(node->left);     // Visit left subtree
    preOrderTraversal(node->right);    // Visit right subtree
}
int main() {
    // Constructing a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Pre-order traversal: ";
    preOrderTraversal(root);
    cout << "\n";
        return 0;
}
