#include <bits/stdc++.h>
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

void insert_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

bool is_palindrome(Node* head, Node* tail) {
    int flag = 1;
    while (head != NULL && tail != NULL && head != tail && head->prev != tail) {
        if (head->val != tail->val) {
            flag = 0;
            break;
        }
        head = head->next;
        tail = tail->prev;
    }
    if (flag == 1) 
    {
    return true;
    }
    else{
    return false;
    }
}

int main() {
    Node* head = 0;
    Node* tail = 0;
    int val;
    while (cin >> val && val != -1) {
        insert_tail(head, tail, val);
    }
    if (is_palindrome(head, tail)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}