#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n,0);
    vector<int> b(m,0);

    for(auto &val : a)cin >> val;
    for(auto &val : b)cin >> val;

    int i = 0, j = 0;

    vector<int> res(m,0);

    while(j<b.size() )
    {
        if(a[i] < b[j] && i < a.size()){ ++i; }
        else {  res[j] = i;  ++j;    }
    }

    for(auto &val: res) cout << val << " ";
    cout << endl;
}