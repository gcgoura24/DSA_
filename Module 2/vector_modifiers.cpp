#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5,6};
    vector<int> v2;
    // v2 = v; // Copying vector v to v2
    // for(int i = 0;i<v2.size();i++) 
    // {
    //     cout << v2[i] << " ";
    // }
    // or 
    // for(int x : v2) // Range-based for loop (wihtout using index variable
    // {
    //     cout << x << " ";
    // }

    // v.pop_back(); // Removes the last element from the vector
    // v.pop_back(); // Removes the last element from the vector again
    // for(int x : v) // Displaying the elements of vector v after popping two elements
    // {
    //     cout << x << " ";
    // }

    // v.insert(v.begin()+2 , 100); // Inserts 10 at index 2
    // for(int x : v) // Displaying the elements of vector v after insertion
    // {
    //     cout << x << " ";
    // }


    // vector<int> v3 = {10, 20, 30};
    // v.insert(v.begin() + 2, v3.begin(), v3.end()); // Inserts elements of v3 at index 2 of v
    // for(int x : v) // Displaying the elements of vector v after inserting elements from v3
    // {
    //     cout << x << " ";
    // }

    
    // v.erase(v.begin() + 2); // Erases the element at index 2
    v.erase(v.begin() + 1, v.end()-1); // Erases elements from index 1 to 4
    for(int x : v) // Displaying the elements of vector v after erasing elements
    {
        cout << x << " ";
    }
    return 0;
}