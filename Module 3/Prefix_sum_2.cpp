// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,t;cin >> n >> t;
//     vector<long long int> v(n+1);
//     for(int i=1;i<=n;i++)
//     {
//         cin >> v[i];
//     }
//     vector<long long int> prefix_sum(n+1);
//     prefix_sum[1] = v[1];
//     for(int i=2;i<=n;i++)
//     {
//         prefix_sum[i] = prefix_sum[i-1] + v[i]; // prefix sum array
//     } 
//     while(t--)  // o(n) for each query
//     {
//         int l,r;cin >> l >> r;
//         long long int sum = 0;
//         if(l == 1)
//         {
//             sum = prefix_sum[r];
//         }
//         else
//         {
//             sum = prefix_sum[r] - prefix_sum[l-1]; // sum from l to r
//         }
//     cout << sum << endl;
//     }
//     return 0;
// }

    // GC spciall

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;cin >> n>> t;
    vector<long long int> v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin >> v[i];
    }
    vector<long long int> prefix_sum(n+1);
    long long int sum1 = 0;
    for(int i=1;i<=n;i++)
    {
        sum1 += v[i];
        prefix_sum[i] = sum1;

    }
    while(t--)  // o(n) for each query
    {
        int l,r;cin >> l >> r;
        long long int sum = 0;
        if(l == 1)
        {
            sum = prefix_sum[r];
        }
        else
        {
            sum = prefix_sum[r] - prefix_sum[l-1]; // sum from l to r
        }
    cout << sum << endl;
    }

    return 0;
}

