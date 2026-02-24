#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int x;
    cin >> x;
    vector<int> v1(x);
    for(int i = 0;i<x;i++)
    {
        cin >> v1[i];
    }
    int idx;
    cin >> idx;
    v.insert(v.begin() + idx, v1.begin(), v1.end());
    for(int i = 0; i < v.size(); i++){  
        cout << v[i] << " ";
    }

    return 0;
}