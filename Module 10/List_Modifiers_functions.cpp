#include<bits/stdc++.h>
using namespace std;
int main()
{
    // List of integers
    list<int> l1 = {10, 20, 30, 40, 50};

    // list<int> l2;
    // l2 = l1; // Assignment operator to copy elements from l1 to l2
    //or;
    // l2.assign(l1.begin(), l1.end()); // Using assign to copy elements from l1 to l2
    // for(int x : l2) {
    //     cout << x << " "; // Output all elements of l2 to verify copy
    // }

    // l1.push_back(600); // Add an element to the end of the list
    // l1.push_front(100); // Add an element to the front of the list
    // for(int x : l1) {
    //     cout << x << " "; // Output all elements to verify
    // }

    // l1.pop_back(); // Remove the last element from the list
    // l1.pop_front(); // Remove the first element from the list
    // for(int x : l1) {
    //     cout << x << " "; // Output all elements to verify
    // }

    // cout << *next(l1.begin(), 2) << endl; // Access the third element (index 2) using next

    // list<int> l2 = {100, 200,}; // Create another list for insertion demonstration
    // l1.insert(next(l1.begin(), 2), 300); // Insert 300 before the third element
    // l1.insert(next(l1.begin(), 4), l2.begin(), l2.end()); // Insert elements of l2 before the fifth element
    // l1.insert(l1.end(), 700); // Insert 700 at the end of
    // for(int x : l1) {
    //     cout << x << " "; // Output all elements to verify insertion
    // }


    // // l1.erase(next(l1.begin(), 3)); // Remove the second element
    // l1.erase(next(l1.begin(), 1), next(l1.begin(), 3)); // Remove elements from the second to the third (exclusive)
    // for(int x : l1) {
    //     cout << x << " "; // Output all elements to verify insertion
    // }


    // replace(l1.begin(), l1.end(), 20, 400); // Replace all occurrences of 40 with 400
    // for(int x : l1) {   
    //     cout << x << " "; // Output all elements to verify replacement
    // }   


    // auto it = find(l1.begin(), l1.end(), 30); // Find the first occurrence of 30
    // if (it != l1.end()) {
    // cout << "Found 30 at position: " << endl;
    // } else {
    //     cout << "30 not found in the list." << endl;
    // }


    return 0;
}