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
Node* input_tree()
{
    int val;
    cin >> val;
    Node* root;

    //corner case: if the input value is -1, return NULL
    if(val == -1) root = NULL; // If the input value is -1, 
    else root = new Node(val); // create a new node with the input value

    queue<Node*> q; // Create a queue to hold nodes
    if(root) q.push(root); // Start with the root node // or if(root != NULL) q.push(root);

    while(!q.empty())
    {
// 1. node thaka ber kora ana
        Node* p = q.front();
        q.pop();

// 2. node er value print kora
    int l,r;
    cin >> l >> r; // Input left and right child values
    Node* myleft, *myright;
    if(l == -1) myleft = NULL; // If left child is -1, set it to NULL
    else myleft = new Node(l); // Otherwise, create a new node for left child
    if(r == -1) myright = NULL; // If right child is -1, set it to NULL
    else myright = new Node(r); // Otherwise, create a new node for right child
    p->left = myleft; // Set left child of the current node
    p->right = myright; // Set right child of the current node

// 3. children gulo queue te add kora
        if(p->left) //Or, if(p->left != NULL)
            q.push(p->left);
        if(p->right) //Or, if(p->right != NULL)
            q.push(p->right);
    }
    return root; // Return the root of the tree
}
void level_order(Node* root)
{
    queue<Node*> q; // Create a queue to hold nodes
    q.push(root); // Start with the root node
    while(!q.empty())
    {
        // 1. node thaka ber kora ana
        Node* f = q.front();
        q.pop();

        // 2. node er value print kora
        cout << f->val << " ";

        // 3. children gulo queue te add kora
        if(f->left) //Or, if(f->left != NULL)
            q.push(f->left);
        if(f->right) //Or, if(f->right != NULL)
            q.push(f->right);
    }
}
void insert(Node*& root, int val)
{
    if(root == NULL) // If the tree is empty, create a new node
    {
        root = new Node(val);
        return;
    }
    if(val < root->val) // If the value is less than the current node's value, insert in the left subtree
    {
        if(root->left == NULL) // If left child is NULL, create a new node
            root->left = new Node(val);
        else // Otherwise, recursively insert in the left subtree
            insert(root->left, val);
    }
    else // If the value is greater than or equal to the current node's value, insert in the right subtree
    {
        if(root->right == NULL) // If right child is NULL, create a new node
            root->right = new Node(val);
        else // Otherwise, recursively insert in the right subtree
            insert(root->right, val);
    }
} 
int main()
{
    Node* root = input_tree(); // Initialize root by building the tree
    int val; cin >> val;
    insert(root, val); // Insert the value into the BST
    
    level_order(root); // Print the tree in level order

    return 0;
}
