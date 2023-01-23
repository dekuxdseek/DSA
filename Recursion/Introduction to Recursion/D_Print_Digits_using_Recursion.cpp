#include<bits/stdc++.h>
using namespace std;


void fun(int n)
{
    if(n == 0) return;
    int m = n%10;
    fun(n/10);
    cout << m << " ";
}



int main()
{
    int t;
    cin >> t;
    while ( t -- )
    {
        int n;
        cin >> n;
        if(n == 0)
        {
            cout << 0 << endl;
        }
        else{
        fun(n);
        cout << endl;}
    }
}