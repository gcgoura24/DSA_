#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1, 2, 3, 4, 5};
    v.push_back(100); // Adding an element to the end of the vector
    // cout << (int)&v[4] << " " << (int)&v[5]; 
    // cout << "Address of v[4]: " << (int)&v[4] << endl;
    cout << "Address of v[4]: " << (void*)&v[4] << endl; // Print address of the 5th element


    return 0;
}