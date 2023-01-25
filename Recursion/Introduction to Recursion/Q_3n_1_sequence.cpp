#include<bits/stdc++.h>
using namespace std;


int seq(int n)
{
    if(n == 1) return 1;

    if(n%2) {int i = seq(3*n + 1);return i+1;}
    else {int i =seq(n/2); return i+1;}
}



int main()
{
    int n;
    cin >> n;
    cout << seq(n) << endl;
}