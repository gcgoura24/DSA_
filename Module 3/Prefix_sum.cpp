// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;cin >> n;
//     vector<int> v(n+1);   // indx shifted 0 to 1
//     for(int i=1;i<=n;i++)   
//     {
//         cin >> v[i];
//     }   
//     vector<int> prefix_sum(n+1);
//     prefix_sum[1] = v[1];
//     for(int i=2;i<=n;i++)
//     {
//         prefix_sum[i] = prefix_sum[i-1] + v[i];
//     } 
//     for(int i=1;i<=n;i++)
//     {
//         cout << prefix_sum[i] << " ";
//     }

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)   
    {
        cin >> v[i];
    }
    vector<int> prefix_sum(n);
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += v[i];
        prefix_sum[i] = sum;

    }
    for(int i=0;i<n;i++)
    {
        cout << prefix_sum[i] << " ";
    }

    return 0;
}