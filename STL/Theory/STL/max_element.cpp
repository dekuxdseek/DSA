#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

//to get comp 
bool comp(const map<string,int> &a, const map<string, int> &b)
{
    return a.second < b.second;
}

int main()
{
    vector<int> arr = { 1,1,1,1,1,1,1,1,5,6,7,8,9,14};

    int n = arr.size();

    auto it = max_element(arr.begin(),arr.end());

    cout<<it - arr.begin()<<endl;


    map<string,int> m;
    m["the"] = 2;
    m["devil"] = 1;
    m["sky"] = 1;
    m["here"] = 1;

    auto it = max_element(m.begin(),m.end(),comp);
}