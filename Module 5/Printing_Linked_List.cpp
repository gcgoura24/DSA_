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
    Node* a = new Node(20); // Create the a node with value 20
    Node* b = new Node(30); // Create the b node with value 30
    Node* c = new Node(40); // Create the c node with value 20

    head->next = a; // Link the first node to the a node
    a->next = b; // Link the a node to the b node   
    b->next = c; // Link the b node to the c node
    
    // Print the values of the nodes
    // cout << head->val << endl; // Output: 10
    // cout << head->next->val << endl; // Output: 20  
    // cout << head->next->next->val << endl; // Output: 30
    // cout << head->next->next->next->val << endl; // Output: 40
    
    // Print the values of the nodes using a loop
    Node* tmp = head; // Start from the head node
    while (tmp != NULL) 
    {
        cout << tmp->val << endl; // Print the value of the tmp node
        tmp = tmp->next; // Move to the next node
    }
    
    return 0;
}