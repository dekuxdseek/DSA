#include<bits/stdc++.h>
using namespace std;


// void knapsack (int N, int W, vector<pair<int,int>> a , int sum, int idx)
// {
//     if(idx == N) {cout << sum << endl; return;}
//     if(W - a[idx].first >= 0 && a[idx].first>0)
//     {
//         W -= a[idx].first;
//         sum += a[idx].second;
//     }

//     knapsack(N,W,a,sum,idx+1);
// }



bool cmp(pair<int,int> a, pair<int,int> b)
{
    return a.second/a.first > b.second/b.first;
}



int main()
{
    int n, w;
    cin >> n >> w;
    int N = n;
    vector<pair<int,int>> v;
    while(n--)
    {
        int a , b;
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }

    sort(v.begin(),v.end(),cmp);
    
    for(auto val: v)
    {
         cout << val.first << " " << val.second << endl;
    }

    // knapsack(N,w,v,0,0);
}