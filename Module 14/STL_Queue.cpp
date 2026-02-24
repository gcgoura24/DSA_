#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q; // Using STL queue to implement the queue
    q.push(10); // Push 1 onto the queue
    q.push(20); // Push 2 onto the queue
    q.push(30); // Push 3 onto the queue
    cout << q.front() << " " << q.back() << " " << q.size() << endl; // Output the front, back, and size of the queue
    if(!q.empty()) // Check if the queue is not empty
    {
        q.pop(); // Remove the front element
    }
    while(!q.empty()) // While the queue is not empty
    {
        cout << q.front() << " "; // Output the front value
        q.pop(); // Remove the front element
    }

    return 0;
}