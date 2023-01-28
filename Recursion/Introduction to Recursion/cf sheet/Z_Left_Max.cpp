#include<bits/stdc++.h>
using namespace std;


void left_max(vector<int> &a, int id, int n, int maxo)
{
    if(id == n) return;
    int maxi = max(a[id],maxo);
    cout << maxi << " ";
    left_max(a,id+1,n,maxi);

}


int main()
{
    int n;
    cin >> n;
    vector<int> a(n,0);

    for(auto &val: a) cin >>val;

    left_max(a,0,n,INT_MIN);
}