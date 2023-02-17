#include<bits/stdc++.h>
using namespace std;

vector<string> getMazePaths(int sr, int sc, int dr, int dc)
{
    // your code goes here
    if(sr == dr && sc == dc)
    {
        return {""};
    }
    else if(sr > dr)
    {
        return {};
    }
    else if( sc > dc)
    {
        return {};
    }
    vector<string> h = getMazePaths( sr , sc+1 , dr, dc);
    vector<string> v = getMazePaths( sr+1 , sc, dr, dc);

    vector<string> res;
    for(auto &val: h)
    {
        res.push_back('h' + val);
    }
    for(auto &val : v)
    {
        res.push_back('v' + val);
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> res = getMazePaths(0,0,n-1,m-1);
        for(auto &val: res)
        {
        cout << val << endl;
        }
    }
}