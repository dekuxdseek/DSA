#include<bits/stdc++.h>
using namespace std;



void isPalindrome(vector<int> &a, int idxi, int idxf)
{
    if(idxi > idxf)
    {
        cout<< "YES" << endl;
        return;
    }

    if(a[idxi]!= a[idxf])
    {
        cout<<"NO"<<endl;
        return;
    }
    
    isPalindrome(a,idxi+1,idxf-1);
}


int main()
{
    int n;
    cin >> n;
    vector<int> a(n,0);

    for(auto &val: a)cin >> val;
    isPalindrome(a,0,n-1);
}
