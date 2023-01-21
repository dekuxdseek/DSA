#include<algorithm>
#include<iostream>
#include<iterator>
#include<map>
#include<vector>
#include<unordered_map>
#include<set>
#include<unordered_set>

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

sets = maps - value
sets = {keys};

types of sets: sets, unordered sets, multisets
*/

void printSet(set<string> const &s)
{
    for(auto val: s)
    {
        cout<<val<<endl;
    }
}
void solve()
{
    //ordered sets
    set<string>s;
    s.insert("abc");    //log(n) - redblack trees - self balancing trees
    s.insert("def");
    s.insert("ghj");

    printSet(s);
    auto it = s.find("abcd");    //log(n)
    // if element doesn't exists ,then .find will return s.end() iterator
    // [] operator is not used in sets
    if(it != s.end())
    {
        s.erase(it);
    }

    printSet(s);

    //unordered sets    //o(1) - to check presence and where order doesn't matters

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
