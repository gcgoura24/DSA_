#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l1 = {10,20,30,40}; // Default constructor


    // l1.clear(); // Clear the list
    // cout << "Size of list after default constructor: " << l1.size() << endl;
    // if(l1.empty()) {
    //     cout << "List is empty after clear." << endl;
    // } else {
    //     cout << "List is not empty ." << endl;
    // }

    l1.resize(2); // Resize the list to 2 elements
    // l1.resize(6, 100); // Resize the list to 6 elements, filling new elements with 100

    for(int x : l1) {
        cout << x << " "; // Output all elements to verify
    }
    return 0;
}