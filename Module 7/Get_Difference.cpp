#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }

    // Find max and min
    int mx = INT_MIN;
    int mn = INT_MAX;
    Node *tmp = head;
    while (tmp != NULL)
    {
        mx = max(mx, tmp->val);
        mn = min(mn, tmp->val);
        tmp = tmp->next;
    }

    cout << (mx - mn) << endl;
    return 0;
}