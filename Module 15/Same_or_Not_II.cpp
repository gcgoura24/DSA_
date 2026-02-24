#include <bits/stdc++.h>
using namespace std;

class Node 
{
public:
    int val;
    Node* next;
    Node(int val) 
    {
        this->val = val;
        this->next = NULL;
    }
};

class myQueue
{
public:
    Node* head;
    Node* tail;
    int sz;

    myQueue() {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    void push(int val)
    {
        Node* newNode = new Node(val);
        sz++;
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop()
    {
        if (head == NULL) return;
        sz--;
        Node* temp = head;
        head = head->next;
        delete temp;
        if (head == NULL)
            tail = NULL;
    }

    int front()
    {
        // Assumes not empty when called
        return head->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return head == NULL;
    }
};

class myStack
{
public:
    Node* head;
    int sz;

    myStack() {
        head = NULL;
        sz = 0;
    }

    void push(int val)
    {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        sz++;
    }

    void pop()
    {
        if (head == NULL) return;
        sz--;
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    int top()
    {
        // Assumes not empty when called
        return head->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;
    myStack st;
    myQueue q;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        st.push(val);
    }
    for (int i = 0; i < m; i++) {
        int val;
        cin >> val;
        q.push(val);
    }

    if (st.size() != q.size()) {
        cout << "NO" << endl;
    } else {
        bool same = true;
        while (!st.empty() && !q.empty()) {
            if (st.top() != q.front()) {
                same = false;
                break;
            }
            st.pop();
            q.pop();
        }
        cout << (same ? "YES" : "NO") << endl;
    }
    return 0;
}