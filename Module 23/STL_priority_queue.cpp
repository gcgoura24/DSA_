#include<bits/stdc++.h>
using namespace std;
int main()
{  
    // // Create a max-heap priority queue
    priority_queue<int> pq;

    // Create a min-heap priority queue
    // priority_queue<int, vector<int>, greater<int>> pq;
    

    pq.push(10);
    pq.push(5);
    pq.push(30);
     cout << pq.top() << endl; // Output the largest element
    // pq.push(100);
    pq.push(2);
    cout << pq.top() << endl; // Output the largest element after adding 100
    pq.pop(); // Remove the largest element (100)
    pq.pop(); // Remove the next largest element (30)
    cout << pq.top() << endl; // Output the largest element after popping two elements

    return 0;
}