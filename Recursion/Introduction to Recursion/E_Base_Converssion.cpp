#include<bits/stdc++.h>
using namespace std;

//convert decimal num to binary num using recursion


int deci_tobinary(int n)
{
    if(n == 0) return n;
    int m = n%2;
    int prev = deci_tobinary(n/2);
    return (prev*10) + m;
}


int main()
{
    int t;
    cin >> t;
    while(t>=1)
    {
        int n;
        cin >> n;
        cout<< deci_tobinary(n) << "\n";
        --t;
    }
    if(t == 1)
    {
        int n;
        cin >> n;
        cout<< deci_tobinary(n);
    }
}