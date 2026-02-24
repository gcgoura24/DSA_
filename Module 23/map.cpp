#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    // map_name[key] = value; // Insert or update key-value pairs
    mp["apple"] = 3;  // complexity O(log n)
    mp["banana"] = 2;
    mp["orange"] = 5;
    mp["mengo"] = 0; // This will insert "mengo" with value 0 if it doesn't exist

    // cout << mp["banana"] << endl; // Output: 2
    // cout << mp["mengo"] << endl; // Output: 0 (default value for int)

    for(auto it = mp.begin(); it != mp.end(); ++it)   
    {
        cout << it->first << " " << it->second << endl; //complexity (logn)
    }
    
    if(mp.count("mango") > 0) {
        cout << "mango exists in the map." << endl; // Check if key exists
    } else {
        cout << "mango does not exist in the map." << endl;
    }

    return 0;
}