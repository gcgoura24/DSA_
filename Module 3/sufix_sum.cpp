#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)   
    {
        cin >> v[i];
    }
    vector<int>suffix_sum(n);
    suffix_sum[n-1] = v[n-1]; // last element is same in suffix sum
    for(int i=n-2; i>=0; i--) // calculate suffix sum from the end
    {
        suffix_sum[i] = suffix_sum[i+1] + v[i]; // suffix sum array
    }
    for(int i=0; i<n; i++)
    {
        cout << suffix_sum[i] << " "; // print suffix sum
    }


    return 0;
}