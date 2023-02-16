#include<bits/stdc++.h>
using namespace std;

vector<string> arr = {".;","abc" , "def" , "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

// char c = s[s.size()-1];
// (int)c - 48



vector<string> getKPC(string s)
{
    if(s.size() == 0)
    {
    vector<string> res ={""};
    return res;

    }
    string str = arr[s[0] -'0'];
    s.erase(s.begin());
    vector<string> ret = getKPC(s);
    vector<string> res;
    for(auto &val1 : str)
    {
        for(auto &val2 : ret)
        {
            res.push_back(val1+val2);
        }
    }

    return res;

}





int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        vector<string> res = getKPC(s);
        for(auto &val : res) cout << val << " ";
    }
}