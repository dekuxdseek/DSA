#include<algorithm>
#include<iostream>
#include<iterator>
#include<map>
#include<vector>

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




int findFrequency(vector<int> v, int x){
    // Your code here
    map<int,int> m;
    for(int i=0; i<v.size(); ++i)
    {
        m[v[i]]++;
    }
    
    auto it = m.find(x);
    return (*it).second;
}


void solve()
{
    vector<int>v;
    for(auto &val: v)
    {
        cin>>val;
    }
    int x;
    cin>>x;
    cout<<findFrequency(v,x);

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
