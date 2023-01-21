#include<bits/stdc++.h>
using namespace std;

long long binaryExponentiation(int a, int b)
{
    if(b == 1) return a;
    long long c = binaryExponentiation(a,b/2);
    if(b%2) return c*c*a;
    return c*c;
}

const long long M=1e9+7; 

long long binaryexponentiation(long long a, long long b)
{
    long long res =1;
    while(b>=1)
    {
        if(b%2)
        {
            res= ((res%M)*(a%M))%M;
            --b;
        }
        else{
            a=((a%M)*(a%M))%M;
            b/=2;
        }
    }
    return res;
}
int main()
{

    // a^b is calculated in o(n) time
    int a,b;
    cin>>a>>b;
    // long long result=1;
    // for(int i=1; i<=b;++i)
    // {
    //     result *= a;
    // }
    // cout<<result<<endl;
    vector<int> v;
    v = {1,0};
    int n = v.size();
    long long power=0;
    for(int i =0; i<v.size(); ++i)
    {
        power+=pow(10,i)*v[n-i-1];
    }
    cout<<power<<endl;
    

    // a^b can be calculated in o(log n)time, by using divide and conquer approach
    cout<<binaryexponentiation(a,b)<<endl;
}