#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v; // type 1
    // vector<int> v(5); // type 2
    vector<int> v(5, 10); // type 3
    // vector<int> v2(v); // Copy constructor (type 4)

    // int arr[5] = {1, 2, 3, 4, 5};
    // vector<int> v3(arr, arr + 5); // type 5 
    
    // vector<int> v = {1, 2, 3, 4, 5}; // type 6

    for(int i =0;i<v.size();i++)
    // for(int i=0;i<v2.size();i++)
    {
        cout<<v[i]<<" ";
        // cout<<v2[i]<<" ";
    }


    return 0;
}