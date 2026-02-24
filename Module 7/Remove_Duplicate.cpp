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

void insert_at_tail(Node *&head, Node *&tail, int val) {
    Node *newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
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
    Node *head = NULL, *tail = NULL;
    int val;
    while (cin >> val && val != -1) {
        insert_at_tail(head, tail, val);
    }

    // Remove duplicates (O(n^2) approach, acceptable for N <= 1000)
    for (Node *i = head; i != NULL; i = i->next) {
        Node *prev = i;
        Node *j = i->next;
        while (j != NULL) {
            if (j->val == i->val) {
                prev->next = j->next;
                delete j;
                j = prev->next;
            } else {
                prev = j;
                j = j->next;
            }
        }
    }

    print_list(head);
    return 0;
}