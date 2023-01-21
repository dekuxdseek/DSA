#include<bits/stdc++.h>
using namespace std;


// to print pattern:
/*
    5
    4
    3
    2
    1
    1
    2
    3
    4
    5
*/

void printdecinc(int n)
{
    if(n == 0) return; 

        cout<<n<<endl;
        printdecinc(n-1);
        cout<<n<<endl;
}


int main()
{
    int n;
    cin>>n;
    printdecinc(n);
}