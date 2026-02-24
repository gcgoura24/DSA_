#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) 
    {
        cin >> v[i]; 
    }   
    vector<int> v2(n);
    for(int i = 0; i < n; i++) 
    {
        cin >> v2[i]; 
    }
    v2.insert(v2.end(), v.begin(), v.end()); // Appending v to v2
    for(int i = 0; i < v2.size(); i++) 
    {
        cout << v2[i] << " "; // Output each element of v2
    }   


    return 0;
}