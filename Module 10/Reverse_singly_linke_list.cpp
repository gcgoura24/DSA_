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
void reverse_linked_list(Node*& head,Node*& tail ,Node* tmp) 
{
    if(tmp->next == NULL) // Base case: if the next node is NULL, we have reached the end
    {
    head = tmp; // Set the head to the last node
        return; // Return to unwind the recursion
    }
    reverse_linked_list(head,tail,tmp->next); // Recursive call with the next node
    tmp->next->next = tmp; // Reverse the link: set the next node's next to the current node
    tmp->next = NULL; // Set the current node's next to NULL to avoid cycles
    tail = tmp; // Update the tail to the current node
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
    reverse_linked_list(head,tail,head); // Print the linked list in reverse order
    print_linked_list(head); // Print the linked list
    
    // cout << head->val << endl; // Print the value of the head node
    // cout << tail->val << endl; // Print the value of the tail node
    return 0;
}