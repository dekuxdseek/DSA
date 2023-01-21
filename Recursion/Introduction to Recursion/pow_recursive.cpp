#include<bits/stdc++.h>
using namespace std;

/*
    calculate x^n, in logarithmic time


*/

int powe(int a , int b)
{
    if(b == 0) return 1;
    if(b%2) return a * powe(a,(b-1)/2) * powe(a,(b-1)/2);
    return powe(a,b/2) * powe(a, b/2);
}
 



int main()
{
    int a , b;
    cin >> a >> b;
    cout << powe(a,b) << endl;
}