#include<bits/stdc++.h>
using namespace std;



vector<string> getStairPaths(int n)
{
    if(n ==0)
    {
        vector<string> res = {""};
        return res;
    }
    else if(n < 0)
    {
        vector<string> res = {};
        return res;
    }

    vector<string> arr1 = getStairPaths(n-1);
    vector<string> arr2 = getStairPaths(n-2);
    vector<string> arr3 = getStairPaths(n-3);
    vector<string> res;
    for(auto &val: arr1)
    {
        res.push_back(val+'1');
    }
    for(auto &val : arr2)
    {
        res.push_back(val +'2');
    }
    for(auto &val : arr3)
    {
        res.push_back(val+'3');
    }

    return res;
}



int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<string> res = getStairPaths(n);

        for(auto &val: res)
        {
            cout << val << " ";
        }
    }
}