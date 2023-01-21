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
#include<cstdlib>


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


bool cmp(pair<string,int> a, pair<string, int> b)
{
    if(a.second != b.second) return a.second> b.second;
    else return a.first < b.first;
}
void solve()
{
    //your code goes here
    int n;
    cin>>n;

    vector<pair<string,int>> vp;

    for(int i =0; i<n; ++i)
    {
        string str;
        int el;
        cin>>str>>el;
        vp.pb(mp(str,el));
    }

    sort(all(vp), cmp);

    me(i,0,n)
    {
        cout<<vp[i].first<<" "<<vp[i].second<<endl;
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
