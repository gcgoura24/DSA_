#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_Head(Node *&head, Node *&tail, int val) 
{
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

void insert_at_tail(Node *&head,Node *&tail ,int val) 
{
    Node *newNode = new Node(val); // Create a new node
    if (head == NULL) 
    {
        head = newNode; 
        tail = newNode; // Also set the tail to the new node
        return;
    }
    tail->next = newNode; // Link the new node at the end of the list
    tail = newNode; // Update the tail to point to the new node

}   

void delete_at_index(Node *&head, Node *&tail, int idx) {
    if (head == NULL) 
    {
        return;
    }
    if (idx == 0) {
        Node *del = head;
        head = head->next;
        if (head == NULL) tail = NULL;
        delete del;
        return;
    }
    Node *tmp = head;
    int i = 0;
    while (tmp != NULL && i < idx - 1) {
        tmp = tmp->next;
        i++;
    }
    if (tmp == NULL || tmp->next == NULL) 
    {
        return;
    }
    Node *del = tmp->next;
    tmp->next = del->next;
    if (del == tail) tail = tmp;
    delete del;
}

void print_list(Node *head) {
    Node *tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main() {
    int Q;
    cin >> Q;
    Node *head = NULL, *tail = NULL;
    for (int i = 0; i < Q; i++) {
        int X, V;
        cin >> X >> V;
        if (X == 0) {
            insert_at_Head(head, tail, V);
        } else if (X == 1) {
            insert_at_tail(head, tail, V);
        } else if (X == 2) {
            delete_at_index(head, tail, V);
        }
        print_list(head);
    }
    return 0;
}

