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
class myQueue
{
    public:
    Node* head = NULL; // Pointer to the front of the queue
    Node* tail = NULL; // Pointer to the back of the queue
    int sz = 0; // Size of the queue

    void push(int val)
    {
        sz++; // Increment the size of the queue
        Node* newNode = new Node(val); // Create a new node with the given value 
                if (head == NULL) // If the queue was empty, set head to the new node
        {
            head = newNode;
            tail = newNode; // Also set tail to the new node
        }
        tail->next = newNode; // Link the new node to the current tail
        tail = newNode; // Update the tail pointer to the new node

    }
    void pop()
    {

        sz--; // Increment the size of the queue
        Node* temp = head; // Store the current head node
        head = head->next; // Move head to the next node
        delete temp; // Delete the old head node
        if (head == NULL) // If the queue is now empty, set tail to NULL
            tail = NULL;
    }
    int front()
    {
        return head->val; // Return the value of the front node
    }
    int back()
    {
        return tail->val; // Return the value of the back node
    }
    int size()
    {
        return sz; // Return the current size of the queue
    }
    bool empty()
    {
        return head == NULL; // Check if the queue is empty
    }

};
int main()
{
    myQueue q; // Create an instance of myQueue
    int n;
    cin >> n; // Read the number of operations
    for(int i=0;i<n;i++)
    {
        int val;
        cin >> val; // Read the value for the operation
        q.push(val); // Push the value onto the queue
    }
    // cout << q.front() << " "<< q.back() <<" " << q.size() << endl; // Output the front, back, and size of the queue

    // Output all elements in the queue
    while(!q.empty()) // While the queue is not empty
    {
        cout << q.front() << " "; // Output the front value
        q.pop(); // Remove the front element
    }

    return 0;
}