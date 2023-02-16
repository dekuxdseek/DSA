#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i< n; ++i)
    {
        cin >> arr[i];
    }


    int st = 0, ed = 0;

    int mx = 0, cs = 0;

    for(int i = 0; i < n; ++i)
    {
        cs += arr[i];


        if(cs < 0) {cs = 0;}


        if(cs > mx)
        {
            mx  = cs;
        }

    }

    cout << mx << endl;
}