#include<algorithm>
#include<iostream>
#include<iterator>
#include<map>
#include<vector>
#include<unordered_map>
#include<set>

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
Given N strings, print unique strings in lexiographical order

N <= 10^5
|S| <= 100000

*/

void printSet(set<string> &s)
{
    for(string val : s)
    {
        cout<<val<<endl;
    }
}
void solve()
{
    set<string>s;
    w(n) // n = number of strings
    {
        string si;
        cin>>si;
        s.insert(si);
    }

    printSet(s);
    
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
