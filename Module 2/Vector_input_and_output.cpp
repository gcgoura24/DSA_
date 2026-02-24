#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // // int a[n];
    // vector<int> v(n);
    // for(int i = 0; i < n; i++) 
    // {
    //     cin >> v[i];
    // }
    // for(int i = 0; i < n; i++) 
    // {
    //     cout << v[i] << " ";
    // }

    // Taking input in vector without specifying size

    
    vector<int> v; //whithout size
    for(int i = 0; i < n; i++) 
    {
        int x;
        cin >> x;
        v.push_back(x); //adding element at the end of vector
    }
    for(int i = 0; i < n; i++) 
    {
        cout << v[i] << " ";
    }
    return 0;
}