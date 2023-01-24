#include<bits/stdc++.h>
using namespace std;



int sum_till_n(int n)
{
    if(n == 0 || n == 1) return n;
    int ans = sum_till_n(n-1);
    ans += n;
    return ans;
}



int main()
{
    int n ;
    cin >> n;
    cout << sum_till_n(n) << endl;
}