/*
कर्मण्येवाधिकारस्ते मा फलेषु कदाचन।
मा कर्मफलहेतुर्भूर्मा ते सङ्गोऽस्त्वकर्मणि॥
*/

#include<algorithm>
#include<iostream>
#include<iterator>
#include<map>
#include<vector>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<numeric>
#include<queue>
#include<stack>
#include<climits>



//Swastik Sharma
#define f                       first
#define s                       second
#define ll                      long long
#define pb                      push_back
#define mp                      make_pair
#define pii                     pair<int,int>
#define vi                      vector<int>
#define mii                     unordered_map<int,int>
#define me(i,start,end)         for(int i =start; i<end; ++i)
#define she(i,start,end)        for(int i =end-1; i>=start; --i)
#define all(v)                  v.begin() , v.end()
#define w(x)                    int x;cin>>x;while(x--)

using namespace std;



vector<vector<int>> prefixSum(const vector<vector<int>>  arr)
{
    int m = arr.size();
    int n = arr[0].size();

    vector<vector<int>> pref(m+1,vector<int>(n+1,0));

    for(int i = 1;i<=m;++i)
    {
        for(int j = 1; j<=n; ++j)
        {
            pref[i][j] = arr[i-1][j-1] +pref[i][j-1]+pref[i-1][j]-pref[i-1][j-1];
        }
    }
    return pref;
}

void solve()
{
    //your code goes here
    int m,n;
    cin>>m>>n;
    vector<vector<int>> mat(m,vector<int>(n,0));
    for(int i =0; i<m;++i){
        for(int j =0;j<n;++j){
            cin>>mat[i][j];
        }
    }

    vector<vector<int>> prefix = prefixSum(mat);



    int k;
    cin>>k;

    vector<vector<int>> answer(m,vector<int>(n,0));

    for(int  i = 0; i<m; ++i)
    {
        for(int j =0; j<n; ++j)
        {
            int r1,r2,l1,l2;
            r1 = i - k;
            r2 = i + k;
            l1 = j - k;
            l2 = j + k;
            if(r1<0) r1 = 0;
            if(l1<0) l1 = 0;
            if(r2>m) r2 = m;
            if(l2>n) l2 = n;

            answer[i][j] = prefix[r2+1][l2+1] - prefix[r1][l2+1] - prefix[r2+1][l1] + prefix[r1][l1];
        }
    }

        for(auto i : answer)
    {
        for(auto j : i){
            cout<<j<<" ";
        }cout<<endl;
    }





}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }return 0;
}


// © Copyright 2022 swastiksharma09_Template.ex