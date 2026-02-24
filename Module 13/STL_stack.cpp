#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st; // Using STL stack
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val; // Input each element
        st.push(val); // Push elements onto the stack
    }
    while(!st.empty()) {
        cout << st.top() << endl;
        st.pop(); // Pop elements from the stack
    }


    return 0;
}