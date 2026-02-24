#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin >> n;
    vector<long long int> v(n+1);   // indx shifted 0 to 1
    for(int i=1;i<=n;i++)   
    {
        cin >> v[i];
    }   
    vector<long long int> prefix_sum(n+1);
    prefix_sum[1] = v[1];
    for(int i=2;i<=n;i++)
    {
        prefix_sum[i] = prefix_sum[i-1] + v[i];
    } 
    reverse(prefix_sum.begin()+1, prefix_sum.end()); 
    for(int i=1;i<=n;i++)
    {
        cout << prefix_sum[i] << " ";
    }

    return 0;
}