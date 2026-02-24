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
    Node* head = new Node(10); // Create the head node
    Node* a = new Node(20); // Create the second node
    Node* b = new Node(30); // Create the third node
    Node* c = new Node(40); // Create the fourth node
    Node* d = new Node(50); // Create the fifth node
    
    // Linking nodes to form a cycle
    head->next = a; // Link head to the second node
    a->next = b; // Link second node to the third node
    b->next = c; // Link third node to the fourth node
    c->next = d; // Link fourth node to the fifth node
    d->next = a; // Link fifth node back to the second node, creating a cycle

    Node* slow = head; // Initialize slow pointer
    Node* fast = head; // Initialize fast pointer
    bool flag = false; // Flag to indicate cycle detection

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next; // Move slow pointer by one step
        fast = fast->next->next; // Move fast pointer by two steps
        if (slow == fast) // If slow and fast pointers meet, a cycle exists
        {
            flag = true; // Set flag to true indicating cycle detected
            break;// Cycle detected
        
        }
    }
            if(flag == true) // If a cycle is detected, break the loop
        {
            cout << "Cycle detected in the linked list." << endl;
        }
        else // If no cycle is detected, print this message
        {
            cout << "No cycle detected in the linked list." << endl;
        }

    return 0;
}