// Level order traversal, also known as breadth-first traversal, 
// is a method of visiting and exploring nodes in a tree or graph
//  by visiting all the nodes at the same level before moving to the next level.


#include <iostream>
#include <queue>

using namespace std;

// Node structure for a binary tree
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to create a new node with the given data
Node* createNode(int data) {
    Node* newNode = new Node();
    if (!newNode) {
        cout << "Memory error\n";
        return nullptr;
    }
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}




// --> Level Order Traversal

// Function to perform level order traversal of a binary tree
void levelOrderTraversal(Node* root) {
    if (root == nullptr)
        return;
    
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        cout << current->data << " ";
        if (current->left != nullptr)
            q.push(current->left);
        if (current->right != nullptr)
            q.push(current->right);
        q.pop();
    }
}



int main() {
    // Create a sample binary tree
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);


    // Perform level order traversal
    cout << "Level Order Traversal: ";
    levelOrderTraversal(root);

    return 0;
}
