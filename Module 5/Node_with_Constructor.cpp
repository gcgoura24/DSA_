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
int main()
{
        Node a(10), b(20), c(30);
        
        a.next = &b; // a points to b
        b.next = &c; // b points to c

        cout << a.val << endl; // Output: 10
        cout << a.next->val << endl; // Output: 20 (value of b)
        cout << a.next->next->val << endl; // Output: 30 (value of c)


    return 0;
}