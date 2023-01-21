#include<bits/stdc++.h>
using namespace std;


/*
    to print pattern for n,
   1
   2
   3
   .
   .
   .
   n-1
   n
*/

void printincreasing(int n)
{
    if( n == 0) return;
    printincreasing(n-1);
    cout<<n<<endl;
}


int main()
{
    int n;
    cin>>n;
    printincreasing(n);
}