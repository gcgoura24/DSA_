#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n); // Vector to store integers
    for(int i = 0; i < n; i++) 
    {
        cin >> v[i]; // Taking input for each integer
    }
    for(int i = 0; i < v.size(); i++) 
    {
    if(v[i] == 0) 
    {
          v[i] = 0; // Replacing 0 with 1
        }
        else if(v[i] > 0 )
        {
        v[i] = 1; 
        }
        else 
        {
          v[i] = 2; // Replacing negative numbers with -1
    }
    }
    for(int i = 0; i < v.size(); i++) 
    {
        cout << v[i] << " "; // Output each element of the vector
    }

    return 0;
}