#include<bits/stdc++.h>
using namespace std;


int sum(vector<int>&v , int size)
{
    if(size == 1) return v[0];
        return v[size -1] + sum(v,size-1);
}



int main()
{
    vector<int> a = { 1,2,3,4,5,6,7,8,9,10};
    cout<<sum(a,a.size())<<endl;
}