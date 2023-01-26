#include<bits/stdc++.h>
using namespace std;


// int  combination(int n, int r)
// {
  
//     if(r == 0) return 1;
//     if(r == n) return 1;
//     return combination(n-1,r-1) + combination(n-1,r);
// }


long long  combination (int n, int r)
{
    if(r == 0) return 1;
    if(r == n) return 1;
    return combination(n,r-1) * (n-r+1)/r;
}




int main()
{
    int n,r;
    cin >> n >> r;
    cout << combination(n,r)  << endl;
}