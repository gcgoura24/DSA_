#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
        int val;
        Node* next;

        // Constructor to initialize the node with a value
        Node(int val) 
        {
            this->val = val;
            this->next = NULL; // Initialize next pointer to NULL
        }
};
int main()
{
    Node* head = new Node(10); // Create the first node with value 10
    Node* a = new Node(20); // Create the second node with value 20
    Node* b = new Node(30); // Create the third node with value 30

    head->next = a; // Link the first node to the second node
    a->next = b; // Link the second node to the third node

    // Print the values of the nodes
    cout << head->val << endl; // Output: 10    
    cout << head->next->val << endl; // Output: 20
    cout << head->next->next->val << endl; // Output: 30
    return 0;
}