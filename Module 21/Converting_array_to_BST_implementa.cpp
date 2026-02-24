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
Node* convert(int a[], int n, int l, int r)
{
    if(l > r) return NULL; // Base case: if the left index exceeds the right index, return NULL

    int mid = (l + r) / 2; // Find the middle index
    Node* root = new Node(a[mid]); // Create a new node with the middle element

    // Recursively build the left and right subtrees
    Node* leftroot = convert(a, n, l, mid - 1);
    Node* rigthroot = convert(a, n, mid + 1, r);
    root->left = leftroot; // Set the left child
    root->right = rigthroot; // Set the right child

    return root; // Return the root of the BST
}
int main()
{
    int n;
    cin >> n; 
    int a[n];
    for(int i =0; i < n; i++)
    {
        cin >> a[i]; // Input the array elements
    }
    Node*root = convert(a,n,0,n-1); // Convert the sorted array to a BST
    level_order(root); // Print the BST in level order

    return 0;
}