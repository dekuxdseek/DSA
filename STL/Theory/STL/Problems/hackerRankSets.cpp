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
    set<int> s;
    w(q)
    {
        int x,y;
        cin>>x>>y;
        
        if(x == 1) {s.insert(y);}

        else if(x == 2) {
            auto it = s.find(y);
            if(it != s.end()){
            s.erase(it);}
            
        }

        else if(x == 3)
        {
            auto it = s.find(y);
            if(it != s.end()) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
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