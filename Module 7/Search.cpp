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

int main() {
    int t;
    cin >> t;
    while (t--) {
        Node *head = NULL, *tail = NULL;
        while (true) {
            int val;
            cin >> val;
            if (val == -1) break;
            insert_at_tail(head, tail, val);
        }
        int x;
        cin >> x;
        int idx = 0;
        bool found = false;
        Node *tmp = head;
        while (tmp != NULL) {
            if (tmp->val == x) {
                cout << idx << endl;
                found = true;
                break;
            }
            tmp = tmp->next;
            idx++;
        }
        if (found==false) 
        {
        cout << -1 << endl;
        }
        // Free memory (optional for this problem)
        // while (head != NULL) {
        //     Node *del = head;
        //     head = head->next;
        //     delete del;
        // }
    }
    return 0;
}