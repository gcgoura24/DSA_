#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int>p;
    pair<int,char>p1;
    pair<int,string>p2;

    // p = make_pair(10, 20);
    // p1 = make_pair(10, 'a');
    //or,
    p = {10, 20};
    p1 = {10, 'a'};
    p2 = {10, "hello"};

    cout << p.first << endl;
    cout << p.second << endl;

    cout << p1.first << endl;
    cout << p1.second << endl;

    cout << p2.first << endl;
    cout << p2.second << endl;


    return 0;
}