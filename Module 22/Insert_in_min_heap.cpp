#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int val; cin >> val;
    v.push_back(val);
    int cur_idx = v.size() - 1;

    while(cur_idx != 0)
    {
        int parent = (cur_idx - 1) / 2;
        if(v[parent] > v[cur_idx]) 
            swap(v[parent], v[cur_idx]);
        else
            break;
        cur_idx = parent;
    }
    for(int x : v) {
        cout << x << " ";
    } 


    return 0;
}