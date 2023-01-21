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

bool isprime(int n);
using namespace std;





void solve()
{
    //your code goes here
/*    

//trivial method - n, square root method - sqrt(n)

    //to check if the num is prime number or not
    int n;cin>>n;
    // cout<<is_prime(n)<<endl;


    for(int i =2; i<n; ++i)
    {
        if(n%i == 0) cout<<i<<" "<<n/i<<" ";
    }
    
*/

    //Sieve of Eratothenes - to find prime numbers between [1,n] for any given n , in O(n*lognlogn);
    //it can be said as a precomputing method

    int n;cin>>n;
    vector<bool> prime(n+1);
    fill(prime.begin(),prime.end(),true);   //one based
    
    prime[0] = prime[1] = false;
    for(int i =2; i*i<=n; ++i)
    {
        if(isprime(i))
        {
            for(int j = i*i; j<=n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    me(i,0,n+1)if(prime[i] ==1)cout<<i<<" ";



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


bool isprime(int n)
{
    for(int i =2; i*i<n; ++i)
    {
        if(n%i ==0)return false;
    }
    return n>1;
}

// © Copyright 2022 swastiksharma09_Template.ex