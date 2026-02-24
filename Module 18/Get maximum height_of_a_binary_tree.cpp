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
int max_hight(Node* root)
{
    if(root == NULL) return 0; // If the tree is empty, return 0
    
    if(root->left == NULL && root->right == NULL) return 0; // If it's a leaf node, return 0
    int l = max_hight(root->left); // Count nodes in the left subtree
    int r = max_hight(root->right); // Count nodes in the right subtree
    return max(l,r)+1; // Return the total count (left + right)
}
int main()
{
    Node* root = input_tree(); // Input the binary tree structure
    
    cout << max_hight(root) << endl; // Output the count of nodes in the binary tree
    return 0;
}