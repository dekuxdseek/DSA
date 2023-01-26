#include<bits/stdc++.h>
using namespace std;


long long logg(long long n)
{
    if(n == 1) return 0;

    return 1 + logg(n/2);
}



int main()
{
    long long n;
    cin >> n;
    cout << logg(n) << endl;
}