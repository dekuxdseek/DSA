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
    map<string,int>m;
    w(x)
    {
        int a;
        cin>>a;

        string b;
        cin>>b;
        
        if(a == 1)
        {
            int c;
            cin>>c;
            m[b] = m[b] + c;
        }
        
        else if(a ==2 ){
            m[b] = 0;
        }
        
        else if(a = 3) {
            cout<<m[b]<<endl;
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
