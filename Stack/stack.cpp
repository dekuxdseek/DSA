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
#include<stack>
#include<queue>


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

    //operations of stack: push, pop, top/peak, size, isEmpty(), isFull()
    stack<int> s;
    s.push(3);
    s.push(7);
    s.push(2);
    s.push(9);

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }cout<<endl;

    
    //operations on queue: enqueue (push), dequeue(pop), peek(front), .isempty(), isfull(), .size
    queue<string> q;
    q.push("swastik");
    q.push("dwij");
    q.push("Lol");
    q.push("diwsa");

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }cout<<endl;
    
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
