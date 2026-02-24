#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
        int val;
        Node* next;
        Node* prev;

        Node(int val) 
        {
            this->val = val;
            this->next = NULL; 
            this->prev = NULL;
        }
};
void print_forward(Node* head) 
{
    Node* temp = head;
    while(temp != NULL) 
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void delete_at_head(Node*& head, Node*& tail) 
{
    Node* delete_node = head;
    head = head->next;
    delete delete_node; 
    if (head == NULL) 
    {
        head = NULL;
        tail = NULL;
        return; // List is empty, nothing to delete  
    }
    
    head->prev = NULL;
    // Free the memory of the deleted node
}
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    delete_at_head(head, tail);
    delete_at_head(head, tail); // Deleting the second node as well
    // After deleting the first node, the list should now contain only the tail node    
    print_forward(head);
    


    return 0;
}