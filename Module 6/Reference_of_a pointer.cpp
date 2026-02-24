#include<bits/stdc++.h>
using namespace std;
void fun(int *&p)
{
    p = NULL; // Setting the pointer to NULL
}
int main()
{
    int a = 10;
    int *p = &a; 
    cout <<"adress before calling fun ->" << p << endl; 
    fun(p); 
    cout << "adress ->" << p << endl;  
    return 0;
}