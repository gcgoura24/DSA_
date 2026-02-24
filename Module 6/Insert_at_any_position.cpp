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
void insert_at_any_pos(Node *&head,int idx ,int val) 
{
    Node* newNode = new Node(val); // Create a new node
    Node* tmp = head; // Start from the head
    for(int i=1;i<idx;i++)
    {
        tmp = tmp->next; // Move to the node before the desired position
    }
    newNode->next = tmp->next; // Connect the new node to the next node
    tmp->next = newNode; // Link the new node at the desired position
}
void print_linked_list(Node* head) 
{
    Node* tmp = head; //aboides using head directly
    while (tmp != NULL) 
    {
        cout << tmp->val << endl; // Print the value of the current node
        tmp = tmp->next; // Move to the next node
    }
}
int main()
{
    //Creating dynamic nodes
    Node* head = new Node(10); 
    Node* a = new Node(20); 
    Node* b = new Node(30);
    
    // Linking the nodes
    head->next = a;
    a->next = b;
    
    insert_at_any_pos(head,3,200);
    

    print_linked_list(head);

    return 0;
}