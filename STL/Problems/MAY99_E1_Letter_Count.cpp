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

bool comp(pair<char,int>& a, pair<char,int>& b)
{
    if(a.second != b.second) return a.second>b.second;
    else{
        return (int)a.first<(int)b.first;
    }
}

char sorten(map<char,int>&m)
{
    vector<pair<char,int>> v;

    for(auto &val : m)
    {
        v.push_back(val);
    }

    sort(all(v), comp);

    return v[0].first;
}



void solve()
{
    //your code goes here
    string s;
    cin>>s;

    map<char, int> m;
    for(int i =0; i<s.size(); ++i)
    {
        char el = s[i];
        m[el]++;
    }

    cout<<sorten(m)<<endl;


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int t;
    t = 1;
    while(t--)
    {
        solve();
    }return 0;
}
