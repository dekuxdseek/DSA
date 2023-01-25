#include<bits/stdc++.h>
using namespace std;


int  combination(int n, int r)
{
    if(r == 0) return n;
    if(r == n) return 1;
    if(r == 1) return n;
    return combination(n-1,r-1) + combination(n-1,r);
}




int main()
{
    int n,r;
    cin >> n >> r;
    cout << combination(n,r)  << endl;
}