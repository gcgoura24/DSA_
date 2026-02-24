#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s); // Read the entire line including spaces
    stringstream ss(s);
    string word;
    map<string, int> mp;
    while(ss >> word) {
        mp[word]++; // Increment the count for each word
    }
    for(auto it = mp.begin(); it != mp.end(); ++it) // NlogN
    {
        cout << it->first << " " << it->second << endl;  // log(n) complexity
    }


    return 0;
}