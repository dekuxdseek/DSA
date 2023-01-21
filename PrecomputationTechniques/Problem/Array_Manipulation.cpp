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
#include<climits>



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


void solve()
{
    //your code goes here
    ll int n;
    cin>>n;
    vector<ll int> diff_array(n+1,0);
    
    ll int m;
    cin>>m;
    ll int arr[m][3];

    for(int i =0; i<m;++i)  //o(n^2)
    {
        for(int j =0; j<3; ++j)
        {
            cin>>arr[i][j];
        }
    }


   
    for(int i =0; i<m; ++i)
    {
        int l = arr[i][0];
        int r = arr[i][1];
        int k = arr[i][2];

        diff_array[l] += k;
        diff_array[r+1] -= k;
    }

    for(int i = 1; i<=n; ++i)
    {
        diff_array[i] += diff_array[i-1];
    }


    auto it = max_element(all(diff_array));
    cout<<*it<<endl;


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


// © Copyright 2022 swastiksharma09_Template.ex