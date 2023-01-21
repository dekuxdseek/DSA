#include<algorithm>
#include<iostream>
#include<iterator>
#include<map>
#include<vector>
using namespace std;

void solve()
{
    map<int,int>m;
    int n;
    cin>>n;
    for(int i =0; i<n;++i)
    {
        int el;
        cin>>el;
        m[el]++;
    }

    int count = 0;

    // for(auto val: m)
    // {
    //     while(val.first != val.second && val.second != 0)
    //     {
    //         --val.second;
    //         ++count;
    //     }
    // }


    for(auto val: m)
    {
        int n = val.first;
        int x = val.second;

        if(x<n) count+= x;
        else count += x -n;
    }

    cout<<count<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}