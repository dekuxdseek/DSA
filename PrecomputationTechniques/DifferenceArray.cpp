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


void solve()
{
    //your code goes here

    int size;   //given array
    cin>>size;
    vi a(size);
    for(auto &value: a) cin>>value;

    int diffArr[size+1]{};
    int queries;
    cin>>queries;
    while(queries--)
    {
        int l,r,k;
        cin>>l>>r>>k;

        diffArr[l] += k;
        diffArr[r+1] -= k;
    }

    for(int i = 1; i<= size+1; ++i)
    {
        diffArr[i] += diffArr[i-1] ;
    }

    for(auto val: diffArr)cout<<val<<" ";
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