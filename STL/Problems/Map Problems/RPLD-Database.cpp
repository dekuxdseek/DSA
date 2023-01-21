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

void solve()
{
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int t;
    cin>>t;
    for(int i =1; i<=t; i++)
    {
    
        // solve();

        map<pair<int,int>,int> m;
    int n,r;
    cin>>n>>r;
    string ans = "possible";
    me(i,0,r)
    {
        int id;cin>>id;
        int num; cin>>num;
        m[mp(id,num)]++;
    }
    for(auto val :m)
    {
        if(val.second > 1)
        {
            ans = "impossible";
            break;
        }
    }

    cout<<"Scenario #"<<i<<":"<<" "<<ans<<endl;
    }return 0;
}
