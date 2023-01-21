#include<iostream>
using namespace std;

int palindromechecker(string s, int a , int b)
{
    if(a < b) return true;
    if(s[a] != s[b])
    {
        // cout<<a<<" "<<b<<endl;
        return false;
    }
   
      if (a <= b )
    return palindromechecker(s, a + 1, b - 1);

    return true;
}

int main()
{
    string s;
    cin>>s;
    cout<<palindromechecker(s,0,s.size()-1)<<endl;
}