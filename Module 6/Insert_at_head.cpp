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
void insert_at_Head(Node *&head, int val) 
{
    Node* newNode = new Node(val); // Create a new node
    newNode->next = head; // connect the new node to the current head
    head = newNode; // change the head to point to the new node
}

//newNode->next = head;  [connect the new node to the current head]
//tmp = tmp->next;  [Move to the next node]

void print_linked_list(Node* head) 
{
    Node* tmp = head; //aboides using head directly
    while (tmp != NULL) 
    {
        cout << tmp->val << " -> "; // Print the value of the current node
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
    
    insert_at_Head(head,100);
    insert_at_Head(head,200);
    insert_at_Head(head,300);

    print_linked_list(head);

    return 0;
}