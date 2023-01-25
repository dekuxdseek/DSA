#include<bits/stdc++.h>
using namespace std;


long long sum(vector<int>&a, int n, int idx)
{
    if(idx == n) return 0;
    long long sumi = sum(a,n,idx+1);
    return sumi + a[idx];
}



int main()
{
    int n, m ;
    cin >> n >> m;
    vector<int> a(n,0);
    for(auto &val: a)cin >> val;
    cout << sum(a,n,n-m);
}