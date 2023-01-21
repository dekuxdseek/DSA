#include<bits/stdc++.h>
using namespace std;

/*
    to print pattern for n
    n
    n-1
    n-2
    .
    .
    .
    3
    2
    1
*/


void printdec(int n)
{
    if(n == 0)return;
    cout<<n<<endl;
    printdec(n-1);
}


int main()
{
    int n;
    cin>>n;
    printdec(n);
}