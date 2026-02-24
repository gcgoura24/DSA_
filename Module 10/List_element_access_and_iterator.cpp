#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {1, 2, 3, 4, 5};
    cout << l.front() << endl; // Accessing the first element
    //or
    cout << *l.begin() << endl; // Accessing the first element using iterator

    cout << l.back() << endl;  // Accessing the last element
    
    cout << *next (l.begin(),2) << endl; // Accessing the third element using iterator


    return 0;
}