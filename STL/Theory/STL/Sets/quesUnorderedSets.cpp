#include<algorithm>
#include<iostream>
#include<iterator>
#include<map>
#include<vector>
#include<unordered_map>
#include<set>
#include<unordered_set>

#define f                       first
#define s                       second
#define ll                      long long
#define pb                      push_back
#define mp                      make_pair
#define pii                     pair<int,int>
#define vi                      vector<int>
#define me(i,start,end)         for(int i =start; i<end; ++i)
#define she(i,start,end)        for(int i =end-1; i>=start; --i)
#define all(v)                  v.begin() , v.end()
#define w(x)                    int x;cin>>x;while(x--)

using namespace std;

/*
Given N strings and Q queries.
In each query  you are given a string 
print yes if string is present
else print no.

N <= 10^6
|S| <= 100
Q <= 10^6

*/
void solve()
{
    unordered_set<string>s;
    w(n)
    {
        string si;
        cin>>si;
        s.insert(si);
    }

    w(q)
    {
    string quer;
    cin>>quer;
    auto it = s.find(quer);

    if(it == s.end()) cout<<"no"<<endl;
    else cout<<"yes"<<endl;
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
