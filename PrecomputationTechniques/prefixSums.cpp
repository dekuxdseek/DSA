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


void solve()
{
    //your code goes here

    //Prefix Sum
    //O(n^2)

    int n;  //size of array
    cin>>n;
    vi a(n);
    me(i,0,n) cin>>a[i];

   int prefix_sum[n]={0};

    for(int i =0; i<n; ++i)
    {
        int sum = 0;
        for(int j = 0; j<=i;++j)
        {
            prefix_sum[i] += a[j];
        }
    }

    //O(n)

    int prefixSum[n] = {0};
    prefixSum[0] = a[0];

    for(int i =1; i<n; ++i)
    {
        prefixSum[i] = prefixSum[i-1] + a[i];
    }

    for(int val: prefixSum) cout<<val<<" ";
    cout<<endl;


    //suffix sum

    vi suffix_sum(n);

    suffix_sum[n-1] = a[n-1];
    for(int i =n-1; i>0; --i)
    {
        suffix_sum[i-1] = suffix_sum[i] + a[i-1]; 
    }
    
    // for(int val: suffix_sum) cout<<val<<" ";
    // cout<<endl;


    //taking queries and finding sum of a range

    //taking sum of range in O(n)

    // w(q)
    // {
    //     int l,r;
    //     cin>>l>>r;

    //     int sum = 0;
    //     for(int i = l; i<=r; ++i)
    //     {
    //         sum += a[i];
    //     }
    //     cout<<sum<<endl;
    // }

    //taking sum of a range in o(q+n), where q is queries
    w(q)
    {
        int l,r;
        cin>>l>>r;
        if(l == 0) cout<<prefix_sum[r]<<endl;
        else{
        cout<<prefix_sum[r] - prefix_sum[l - 1]<<endl;
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
