#include<bits/stdc++.h>
using namespace std;

class myQueue
{
    public:
    list<int> l; // Using STL list to implement the queue
    void push(int val)
    {
        l.push_back(val); // Add the value to the back of the list

    }
    void pop()
    {
        l.pop_front(); // Remove the front element from the list
    }
    int front()
    {
        return l.front(); // Return the value of the front element
    }
    int back()
    {
        return l.back(); // Return the value of the back element
    }
    int size()
    {
        return l.size(); // Return the current size of the queue
    }
    bool empty()
    {
        return l.empty(); // Check if the queue is empty
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