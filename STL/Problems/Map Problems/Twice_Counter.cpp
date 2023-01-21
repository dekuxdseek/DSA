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


int countWords(string list[], int n)
        {
           //code here.
           map<string, int>m;
           
           for(int i =0 ; i<n; ++i)
           {
               string s;
               s = list[i];
               m[s]++;
           }
           
           int c =0;
           for(auto val : m)
           {
               if(val.second == 2)
               {
                   c++;
               }
           }
           
           return c;
        }


void solve()
{

//    cout<<countWords(l,n);


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
