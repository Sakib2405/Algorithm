#include <iostream>
using namespace std;

// Define the structure for a node in the binary tree
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Post-order traversal: Left -> Right -> Root
void postOrderTraversal(Node* node) {
    if (node == nullptr) return;
    postOrderTraversal(node->left);    // Visit left subtree
    postOrderTraversal(node->right);   // Visit right subtree
    cout << node->data << " ";         // Visit the root node
}
int main() {
    // Constructing a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

  cout << "Post-order traversal: ";
    postOrderTraversal(root);
    cout << "\n";
        return 0;
}
