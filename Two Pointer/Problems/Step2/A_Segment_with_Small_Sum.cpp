#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long n, s;
    cin >> n >> s;

    vector<long long> a(n,0);

    for(auto &val: a)cin >> val;

    long long sum = 0;
    long long ans = 0;
    long long maxi = INT_MIN;
    long long l = 0,r = 0;

    while(r<n)
    {

        // if(sum + a[r] <= s)
        // {
        //     sum += a[r];
        //     ans++;
        //     ++r;
        // }
        // else 
        // {
        //     sum -=a[l];
        //     ++l;
        //     ans--;
        // }

        // maxi = max(ans, maxi);


        sum += a[r];
        ++r;
        if(sum <= s)
        {
            ans++;

        }
        else{
            ans--;
            --l;
        }

    }

    cout << maxi << endl;

}