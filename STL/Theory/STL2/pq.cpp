#include<bits/stdc++.h>
using namespace std;


struct cmp
{
    bool operator()(int a, int b)
    {
        return a>b;
    }
};

int main()
{
    // priority_queue<int> pq;
    priority_queue<int, vector<int>> pq; // min pq
    pq.push(9);
    pq.push(4);
    pq.push(7);
    pq.push(3);
    pq.push(8);
    pq.push(1);

    while(!pq.empty())
    {
        int x = pq.top();
        pq.pop();
        cout<<x<<" ";
    }
}