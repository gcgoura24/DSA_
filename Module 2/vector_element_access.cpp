#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    cout << v[2] << endl; // Accessing the third element (index 2)
    cout << v.back() << endl; // Accessing the last element
     //  or
    // cout << v[v.size() - 1] << endl; // Accessing the last element using size

    cout << v[0] << endl; // Accessing the first element
    // cout << v.front() << endl; // Accessing the first element

    return 0;
}