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
    st.push(10);
    st.push(20);
    st.push(30);
    cout << "Top element: " << st.top() << endl;
    st.pop();
    cout << "Top element after pop: " << st.top() << endl;
    st.pop();
    cout << "Top element after another pop: " << st.top() << endl;
    st.pop();
    if(st.empty()== false) // Check if stack is not empty before accessing top
   //if(!st.empty())// Alternative way to check if stack is not empty
    {
        cout << st.top()<< endl;
    }

    return 0;
}  