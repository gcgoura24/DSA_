#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int tm1 = a-1;
        int tm2 = abs(b-c) + c-1;
        if(tm1 < tm2) {
            cout << "1" << endl;
        } else if(tm1 > tm2) {
            cout << "2" << endl;
        } else {
            cout << "3" << endl;
        }
    }


    return 0;
}