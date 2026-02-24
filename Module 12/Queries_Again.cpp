#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int get_size(Node* head) {
    int cnt = NULL;
    Node* tmp = head;
    while (tmp != NULL) {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void print_left(Node* head) {
    cout << "L -> ";
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_right(Node* tail) {
    cout << "R -> ";
    Node* tmp = tail;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert_at(Node*& head, Node*& tail, int idx, int val) {
    int sz = get_size(head);
    if (idx < 0 || idx > sz) {
        cout << "Invalid" << endl;
        return;
    }

    Node* newNode = new Node(val);

    if (idx == 0) {
        if (head == 0) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    } else if (idx == sz) {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    } else {
        Node* tmp = head;
        for (int i = 0; i < idx - 1; i++) {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        newNode->prev = tmp;
        tmp->next->prev = newNode;
        tmp->next = newNode;
    }

    print_left(head);
    print_right(tail);
}

int main() {
    int Q;
    cin >> Q;
    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 0; i < Q; i++) {
        int X, V;
        cin >> X >> V;
        insert_at(head, tail, X, V);
    }

    return 0;
}
