#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
        int val;
        Node* next;
};
int main()
{
    Node a,b,c;
    a.val = 10;
    b.val = 20;
    c.val = 30;

    a.next = &b; // a points to b
    b.next = &c; // b points to c
    c.next = NULL; // c points to NULL

    cout << a.val << endl; // Output: 10

    cout << (*a.next).val << endl; // Output: 20 (value of b)
    // Alternatively, you can use the arrow operator
    cout << a.next->val << endl; // Output: 20 (value of b)
    cout << a.next->next->val << endl; // Output: 30 (value of c)
    return 0;
}