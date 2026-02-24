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
void insert_at_tail(Node *&head,Node *&tail ,int val) 
{
    Node *newNode = new Node(val); // Create a new node
    if (head == NULL) 
    {
        head = newNode; // If the list is empty, set the new node as the head
        tail = newNode; // Also set the tail to the new node
        return;
    }
    tail->next = newNode; // Link the new node at the end of the list
    tail = newNode; // Update the tail to point to the new node

}   // Comlexity: O(1) 


void print_linked_list(Node*& head) 
{
    Node* tmp = head; //aboides using head directly
    while (tmp != NULL) 
    {
        cout << tmp->val << " "; // Print the value of the current node
        tmp = tmp->next; // Move to the next node
    }
    
}
void print_reverse(Node* tmp) 
{
    if (tmp == NULL) // Base case: if the list is empty, return
    {
        return; // This will stop the recursion when we reach the end of the list
    }
    print_reverse(tmp->next); // Recursive call with the next node
    cout << tmp->val << " "; // Print the value after returning from recursion
}

int main()
{
    Node* head = NULL; // Initialize head of the linked list
    Node* tail = NULL; // Initialize tail of the linked list
    int val;
    while(true)
    {
        cin >> val; // Read an integer value from input
        if(val == -1) // If the input is -1, break the loop
            break;
        insert_at_tail(head, tail, val); // Insert the value at the tail of the linked list
    }
    print_reverse(head); // Print the linked list in reverse order
    return 0;
}