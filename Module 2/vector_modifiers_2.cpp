#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 2, 5, 6 ,2};
    // replace(v.begin(), v.end(), 2,100); // Replaces all occurrences of 2 with 100
    // replace(v.begin(), v.end()-1, 2, 100); // Replaces all occurrences of 2 with 100 except the last one

    // for(int x : v) // Displaying the elements of vector v after replacement
    // {
    //     cout << x << " ";
    // }


    auto it = find(v.begin(), v.end(), 100); // Finds the first occurrence of 100
    if(it == v.end()) {
        cout <<  "100 not found in the vector." << endl; // Prints the index of the found element
    } else {
        cout <<"Found 100 at index: " << endl;
    }


    return 0;
}