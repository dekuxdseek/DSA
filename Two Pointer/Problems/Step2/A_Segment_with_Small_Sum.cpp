#include<iostream>
#include<vector>
#include<climits>
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


        sum += a[r];
        ++r;++ans;

       
            while(sum>s )
            {
            ans--;
            sum -= a[l];
            ++l;
            }
        

        maxi = max(ans,maxi);

    }

    cout << maxi << endl;

}



/*
    for(int r = 0 ; r < n; ++r)
    {
        sum += a[r];
        ans ++;

        while(sum>s)
        {
            sum-= a[l];
            l++;
            --ans;
        }

        maxi = max(ans, maxi);
    }

*/