#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n,0);
    vector<int> b(m,0);

    for(auto &val: a)cin >> val;
    for(auto &val: b)cin >> val;

    int f =1 ;
    int sum = 0;
    int i =0 , j  =0;

    while(j<b.size())
    {
        if(a[j] == a[j+1])
        {
            ++j;
            f++;
        }

        else{
            if(b[j] == a[i] && a[i] != a[i+1])
            {
                sum += f;
                ++j;++i;
                f = 1;
            }
            else if(b[j] == a[i] && a[i] == a[i+1])
            {
                sum += f;
                ++i;
            }
            else{
                ++j;
                f = 1;
            }
        }
    }
    cout << sum << endl;






}