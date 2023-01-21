#include<bits/stdc++.h>
using namespace std;

/*
        printing factorial of a number n
        n!

        4! = 4 * 3 * 2 * 1
*/


int fact( int n )
{
    if(n == 1)return 1;
    return n * fact(n-1);
}


int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
}