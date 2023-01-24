#include<bits/stdc++.h>
using namespace std;


void pyramid(int n,int idx)
{
    if(idx == 0) return;
    
    pyramid(n,idx-1);
    for(int i = 0; i < n - idx; ++i)
    {
        cout << " " ;
    }
    for(int i = 0; i < 2*idx -1; ++i)
    {
        cout <<"*";
    }
    cout << endl;
    
}



int main()
{
    int n;
    cin >> n;
    pyramid(n,n);
}