#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    cout << v.size() << v.capacity() << endl;
    v.push_back(11);
    cout << v.size() << v.capacity() << endl; 
    v.push_back(22);
    cout << v.size() << v.capacity() << endl; 
    v.push_back(22);
    cout << v.size() << v.capacity() << endl; 
    v.push_back(22);
    cout << v.size() << v.capacity() << endl; 
    v.push_back(22);
    cout << v.size() << v.capacity() << endl;
    
    for(int val: v)cout << val <<" ";
    cout << endl;

    for(int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }cout << endl; 

    for(int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }cout << endl; 

}