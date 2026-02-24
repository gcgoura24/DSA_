#include<bits/stdc++.h>
using namespace std;
int main()
{
        list<int> l; // Default constructor
    cout << "Size of list after default constructor: " << l.size() << endl;
    list<int> l2(5); // Fill constructor, creates a list with 5 elements initialized to 0
    cout << "Size of list after fill constructor: " << l2.size() << endl;
    list<int> l3(5, 10); // Fill constructor, creates a list with 5 elements initialized to 10
    cout << *l3.begin() << endl; // Output the first element to verify initialization
    for(auto it = l3.begin(); it != l3.end(); ++it) {
        cout << *it << " "; // Output all elements to verify
    }
    //or
    for(int x : l3) {
        cout << x << " "; // Output all elements to verify
    } 

    // list<int> l4 = {1, 2, 3, 4, 5}; // Initializer list constructor
    // for(int x : l4) {
    //     cout << x << " "; // Output all elements to verify
    // } 
    
    // int arr[] = {10, 20, 30, 40, 50};
    // list<int> l5(arr, arr + 5); // Range constructor, creates a list from an array
    // for(int x : l5) {
    //     cout << x << " "; // Output all elements to verify
    // }
    
    // vector<int> v = {1, 2, 3, 4, 5};
    // list<int> l6(v.begin(), v.end()); // Range constructor, creates a list
    // for(int x : l6) {
    //     cout << x << " "; // Output all elements to verify
    // }
    return 0;
}