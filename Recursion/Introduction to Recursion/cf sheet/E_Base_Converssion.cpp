#include<bits/stdc++.h>
using namespace std;

//convert decimal num to binary num using recursion


vector<int> deci_tobinary(int n)
{
    if(n == 0)
    {
        vector<int> base;
        return base;
    }

    long long  m = n%2;
    
    vector<int> res = deci_tobinary(n/2);
    res.push_back(m);
    return res;
    


}


int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        vector<int> result = deci_tobinary(n);

        for(auto &val: result)
        {
            cout<<val;
        }cout<<endl;
    }
}