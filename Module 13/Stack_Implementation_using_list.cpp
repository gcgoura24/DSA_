#include<bits/stdc++.h>
using namespace std;
class my_Stack
{
    public:
        list<int> l;
        void push(int val)
        {
            l.push_back(val);
        }
        void pop()
        {
            l.pop_back();
        }
        int top()
        {
            return l.back();
        }
        int size()
        {
            return l.size();
        }
        bool empty()
        {
            return l.empty();
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

    return 0;
}  