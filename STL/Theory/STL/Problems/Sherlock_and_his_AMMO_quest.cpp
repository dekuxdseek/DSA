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

bool cmp(pair<string,int> a, pair<string,int>b)
{
    if(a.second != b.second) return a.second>b.second;
    return a.first<b.first;
}

void solve()
{
    //your code goes here
    int n;
    cin>>n;
    vector<pair<string,int>> vp;
    while(n--)
    {
        int i;
        string str;
        cin>>str>>i;
        vp.push_back(mp(str,i));
    }


    sort(all(vp),cmp);



    for(auto val: vp)
    {
        cout<<val.first<<" "<<val.second<<endl;
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
