#include<algorithm>
#include<iostream>
#include<iterator>
#include<map>
#include<vector>
#include<unordered_map>

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
print frequency of that string

N <= 10^6
|S| <= 100
Q <= 10^6

*/
void solve()
{
    unordered_map<string,int>m;
    int q;
    cin>>q;
    while(q--)
    {
        string n;
        cin>>n;
        m[n]++;
    }
    int l;
    cin>>l;
    while(l--)
    {
        string s;
        cin>>s;
        cout<<m[s]<<endl;
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
