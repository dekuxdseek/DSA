#include<algorithm>
#include<iostream>
#include<iterator>
#include<map>
#include<vector>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<numeric>

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
int myFun(int a, int b)
{
    return a*b;
}

void solve()
{
    // Important STL functions
    

    vi v = {7,2,9,1,8,3,5,0,4};

    // max_element , min_element  - returns iterator to max and min element in the iterator [)
    auto it = max_element(all(v));
    auto it2 = min_element(all(v));
    cout<<"max: "<<it - v.begin()<<" "<<*it<<endl<<"min: "<<it2 - v.begin()<<" "<<*it2<<endl;
    //it-.begin , it-.end

    //sort - sorts in default (ascending )order [)
    vi v2 = v;
    sort(all(v2));
    for(int val: v2)
    {
        cout<<val<<" ";
    }cout<<endl;

    //reverse - reverses in container in given range [)
    reverse(v2.begin()+2, v2.begin() + 7);

    for(int val: v2)
    {
        cout<<val<<" ";
    }cout<<endl;

    //find - returns first iterator to the element ,count - returns number of occurences of an element
    v2.pb(4);
    v2.pb(4);
    v2.pb(4);
    cout<<"num of times 4 occurs: "<<count(v2.begin(), v2.end(), 4)<<endl;

    for(int val: v2)cout<<val<<" ";
    cout<<endl;
    auto finderOfFour = find(all(v2),4);
    cout<<finderOfFour - v2.begin()<<endl;

    //fill - fills given value in given range [) , iota - fills successive value in given range [)
    fill(v2.begin() + 3, v2.begin() + 7, 69);
    for(int val: v2) cout<<val<<" ";
    cout<<endl;

    iota(v2.begin() + 3, v2.begin() + 7, 96);
    for(int val:v2) cout<<val<<" ";
    cout<<endl;

    //accumulate - takes sum of all elements of container for a given range [)
    ll sum = 1;
    cout<<accumulate(v2.begin()+1, v2.begin() + 3, sum, myFun)<<endl;
    cout<<accumulate(all(v2), sum , minus<int>())<<endl;






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
