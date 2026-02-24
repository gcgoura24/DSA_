#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
        int val;
        Node* left;
        Node* right;

        Node(int val) 
        {
            this->val = val;
            this->left = NULL; 
            this->right = NULL;   
        }
};
int main()
{
    Node *root = new Node(10); // Create a root node with value 10
    Node *a = new Node(20); // Create a node with value 20
    Node *b = new Node(30); // Create a node with value 30
    Node *c = new Node(40); // Create a node with value 40
    Node *d = new Node(50); // Create a node with value 50
    Node *e = new Node(60); // Create a node with value 60
    
    root->left = a; // Set left child of root
    root->right = b; // Set right child of root
    a->left = c; // Set left child of node a
    b->left = d; // Set left child of node b
    b->right = e; // Set right child of node b

    return 0;
}