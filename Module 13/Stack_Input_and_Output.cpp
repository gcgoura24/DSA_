#include<bits/stdc++.h>
using namespace std;
class my_Stack
{
    public:
        vector<int> v;
        void push(int val)
        {
            v.push_back(val);
        }
        void pop()
        {
            v.pop_back();
        }
        int top()
        {
            return v.back();
        }
        int size()
        {
            return v.size();
        }
        bool empty()
        {
            return v.empty();
        }
};
int main()
{
    my_Stack st;
    int n;
    cin >> n; // Input the number of elements to push onto the stack
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val; // Input each element
        st.push(val);
    }
    while(!st.empty()) {
        cout << st.top() <<endl;    
        st.pop(); // Pop elements from the stack
    }
    
    //or;

    // for(int i = 0; i < n; ++i) {

    //     if (!st.empty()) {
    //         cout << st.top() << endl; // Display top element after each pop
    //     }
    //     st.pop(); // Pop elements from the stack
    // }

    return 0;
}  