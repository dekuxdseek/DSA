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

void solve()
{
    //notes
    //unordered map
    //order doesn't matter
    // 1. implementaion details - HashTables
    // 2. time complexity
    // 3. valid keys datatype

    //insertion, deletion in O(1) [avg]
    unordered_map<int,string> m;
    m[1] = "abs";
    m[3] = "dis";
    m[5] = "hik";
    m[2] = "lol";
    for(auto &val: m)
    {
        cout<<val.first<<" "<<val.second<<endl;
    }

    //pair doesn't have inbuilt hashfunction
    // hashfunction is defined for basic dt like int, longlong, double, float , but not for complex dt like set,vectors, pairs etc
     
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
