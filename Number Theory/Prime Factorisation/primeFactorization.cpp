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

    //prime factorization is finding prime factors of a given number
    // 1. trial division method
    // 2. sieve method

    // trial division method
    // using the fact that smallest divisor of any number is a prime, and is less than square root of that number
    // moreover, n can be represented as product of powers of primes
    int n;cin>>n;

    vector<int> factor;

    for(int i =2; i*i<n; ++i)
    {
        while(n%i == 0)
        {
            factor.pb(i);
            n /= i;
        }

        if(n>1) factor.pb(n);
    }
    for(auto val: factor)cout<<val<<" ";
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

bool isprime(int n)
{
    for(int i =2; i*i<n; ++i)
    {
        if(n%i ==0)return false;
    }
    return n>1;
}

// © Copyright 2022 swastiksharma09_Template.ex