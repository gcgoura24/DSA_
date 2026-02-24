#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ; cin >> n ;
    // O(sqrt(N)) Complexity

    for(int i =1 ;i<=sqrt(n) ;i++){
//  for(int i=1;i*i<=n;i++){
    if(n%i==0){

        cout << i << " " ;

        cout << n/i << " " ;

        }

    }


//  Input : 100 

//  Output : 100 50 25 12 6 3 



    return 0;
}