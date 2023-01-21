#include<bits/stdc++.h>
using namespace std;

vector<int>result;

void printnew(int n)
{
    if(n == result[0])
    {
        result.push_back(n);
        return;
    }
    result.push_back(n);
    printnew(n+5);
}

void print(int n)
{
    if(n - 5 <= 0)
    {
        result.push_back(n);
        result.push_back(n-5);
        printnew(n);
        return;
    }
    result.push_back(n);
    print(n-5);
}

int main()
{
    int n;
    cin>>n;
    print(n);

    for(auto val : result)cout<<val<<" ";
    cout<<endl;
}