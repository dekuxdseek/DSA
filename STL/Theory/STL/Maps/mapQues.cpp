#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
#include<map>
//given n strings, print unique strings in lexiographical order with their frequency
using namespace std;

int main()
{
    map<string, int> m;
    int n;
    cin>>n;
    for(int i = 0; i<n;++i)
    {
        string s;
        cin>>s;
        // m[s] = m[s] + 1;
        m[s]++;
    }
    
    for(auto &val : m)
    {
        cout<<(val).first<<" "<<(val).second<<endl;
    }
}

