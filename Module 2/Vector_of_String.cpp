#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // Taking input without spaces in strings

    vector<string> v(n); // Vector to store strings
    for(int i = 0; i < n; i++) 
    {
        cin >> v[i]; // Taking input for each string
    }
     for(auto str : v)  //OR for(string str : v)
    {
        cout << str <<endl; // Output each string
    }

    // Taking input with spaces in strings

    // cin.ignore(); // To ignore the newline character after the last input
    // vector<string> v(n);
    // for(int i = 0; i < n; i++) 
    // {
    //     getline(cin, v[i]); // Taking input for each string with spaces
    // }
    // for(string s : v) 
    // {
    //     cout << s << endl; // Output each string
    // }
    return 0;
}