#include<bits/stdc++.h>
using namespace std;


void evenIndices(vector<int> &v, int idx)
{
    if(idx == v.size()) return;

    evenIndices(v,idx+1);
    if(idx%2 == 0) cout<<v[idx]<<" ";
}



int main()
{
    int n;
    cin >> n;
    vector <int> v(n,0);
    for(auto &val: v) cin>> val;
    evenIndices(v,0);
}