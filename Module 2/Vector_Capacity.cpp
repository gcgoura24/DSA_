#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    // cout << "Initial capacity: " << v.capacity() << endl;
    // v.push_back(10);
    // cout << "Capacity after adding one element: " << v.capacity() << endl;
    // v.push_back(10);
    // cout << "Capacity after adding two elements: " << v.capacity() << endl;
    // v.push_back(10);
    // cout << "Capacity after adding three elements: " << v.capacity() << endl;
    // v.push_back(10);
    // cout << "Capacity after adding four elements: " << v.capacity() << endl;
    // v.push_back(10);
    // cout << "Capacity after adding five elements: " << v.capacity() << endl;

    // v.clear();
    // cout << "size after clearing: " << v.size() << endl;
    // cout << v[2] << endl; //Clears the vector elements. Do not delete the memory, only clear the value.

    // v.resize(10);
    // cout << "size after resizing: " << v.size() << endl;

    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.resize(7,100);
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}