#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
bool comp(int a , int b)
{
    if(a<b) return true;
    else return false;
}

int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(7);
    v.push_back(19);
    v.push_back(3);
    v.push_back(6);
    
    sort(v.begin(), v.end(),comp);
    for(auto it: v) 
    {
        cout<<it<<endl;
    }cout<<endl;
    

    reverse(v.begin(),v.end());
    for(auto it: v) 
    {
        cout<<it<<endl;
    }cout<<endl;
    
    auto it = min_element(v.begin(), v.end());
    cout<<*it<<endl;
    cout<<endl;

    int sum = accumulate(v.begin(), v.end(),0);
    cout<<sum<<endl;

}