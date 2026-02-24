#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> myList;
    int val;

    // Step 1: Input values until -1
    while (cin >> val && val != -1) {
        myList.push_back(val);
    }

    // Step 2: Sort the list
    myList.sort(); // Required before using unique()

    // Step 3: Remove consecutive duplicates
    myList.unique();

    // Step 4: Print the final list
    for (int v : myList) {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}