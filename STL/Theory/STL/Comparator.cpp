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

bool should_i_swap(pair<int,int> a, pair<int,int> b)
{
    //both in increasing order
/*
    if(a.first != b.first)
    {
        if(a.first> b.first) return true;
        return false;
    }
    else{
        if(a.second > b.second) return true;
        return false;
    }

*/
/*
     //both in decreasing order
     if(a.first != b.first)
     {
        if(a.first < b.first) return true;
        return false;
     }
     else{
        if(a.second < b.second) return true;
        return false;
     }
*/

    // first in increasing and second in decreasing order
/*    if(a.first != b.first)
    {
        if(a.first>b.first) return true;
        return false;
    }
    else{
        if(a.second<b.second) return true;
        return false;
    }
*/

    //first in decreasing and second in increasing order
/*
    if(a.first != b.first)
    {
        if(a.first< b.first) return true;
        return false;
    }
    else{
        if(a.second>b.second) return true;
        return false;
    }
*/

// return the condition, you your parameters to get swapped [not for inbuilt sort]

// both increasing
    // if(a.first != b.first) return a.first>b.first;
    // else return a.second>b.second;

//both decreasing
    // if(a.first != b.first) return a.first<b.first;
    // else return a.second<b.second;

// increasing and decreasing
    // if(a.first != b.first) return a.first>b.first;
    // else return a.second<b.second;

// decreasing and increasing
    // if(a.first != b.first) return a.first<b.first;
    // else return a.second>b.second;

    // return the order which you want [for inbuilt sort]

    if(a.first != b.first) return a.first< b.first;
    return a.second<b.second;
}
void solve()
{
    //your code goes here
    //comparator function

    int n;
    cin>>n;
    vector<pair<int,int>> vp(n);

    for(int i =0; i<n ; ++i)
    {
        cin>>vp[i].first>>vp[i].second;
    }
    
    //sorting code - o(n^2)
    // for(int i =0; i<n; ++i)
    // {
    //     for(int j = i + 1; j<n; ++j)
    //     {
    //         if(should_i_swap(vp[i],vp[j])) //making it abstract
    //         {
    //             swap(vp[i],vp[j]);
    //         }
    //     }
    // }

    sort(all(vp), should_i_swap); // inbuilt sort funct: it you want to swap the parameters, you return the false and not true

    for(auto val: vp) cout<<val.first<<" "<<val.second<<endl;;
    cout<<endl;

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
