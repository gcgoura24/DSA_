#include<bits/stdc++.h>
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
    int i=0,j=n-1,swop=0;
    while(i<j)
    {
        swop = v[i]; // Store the value at index i
        v[i] = v[j]; // Swap the values at index i and 
        v[j] = swop; // j
        i++; // Move to the next index from the start   
        j--; // Move to the next index from the end
    }
    for(int i = 0; i < v.size(); i++) 
    {
        cout << v[i] << " "; // Output each element of the vector
    }


    return 0;
}