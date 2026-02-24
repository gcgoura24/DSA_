
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[n];
    cin >> n;
    for(int i=0; i<n; i++)  
    {
        cin >> a[i];
    }   
    int key;
    cin >> key;
    int l = 0, r = n - 1;
    while(l <= r)
    {
        int mid = l + (r - l) / 2; // to avoid overflow
        if(a[mid] == key)
        {
            cout << "Element found at index: " << mid << endl;
            return 0; // element found
        }
        else if(a[mid] < key)
        {
            l = mid + 1; // search in right half
        }
        else
        {
            r = mid - 1; // search in left half
        }
    }

    return 0;
}