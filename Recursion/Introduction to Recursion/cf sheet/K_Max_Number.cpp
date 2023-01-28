#include<bits/stdc++.h>
using namespace std;

int max_num(vector<int> &a, int n, int idx)
{
    if(idx == n) return INT_MIN;
    int maxi = max_num(a,n,idx+1);
    return max(maxi,a[idx]);
}


int main()
{
    int n;
    cin >> n;
    vector<int>a(n,0);
    for(auto &val: a)cin >> val;

    cout << max_num(a,n,0) << endl;
}