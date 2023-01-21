#include<bits/stdc++.h>
using namespace std;

/*
    calculate power of num, x^n in linear time
*/


int powe(int x , int n)
{
    if(n == 0)return 1;
    return x * powe(x,n-1); 
}



int main()
{
    int x, n;
    cin >> x >> n;

    cout<< powe(x,n) << endl;
}