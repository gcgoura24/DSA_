#include<bits/stdc++.h>
using namespace std;
int main()
{
    // set is a collection of unique elements, sorted in ascending order by default
    // It automatically handles duplicates and maintains order
    // Complexity for insertion and search is O(log n)
    // It is STL of BST

    set<int> s;
    int n; cin >> n;
    while(n--) 
    {
        int val; cin >> val;
        s.insert(val); // Insert elements into the set
    }
    for(auto it = s.begin(); it != s.end(); ++it)
    {
        cout << *it << " "; // Print elements in sorted order
    }

    // if(s.count(4))
    // {
    //     cout << "4 exists in the set." << endl; // Check if an element exists
    // }
    // else
    // {
    //     cout << "4 does not exist in the set." << endl;
    // }


    return 0;
}