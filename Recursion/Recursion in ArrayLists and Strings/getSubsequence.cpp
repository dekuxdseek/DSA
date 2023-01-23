#include <iostream>
#include <vector>
using namespace std;

vector<string> gss(string s){
    // write your code here
    
    if(s.size() == 0)
    {
        vector<string> base;
        base.push_back("");
        return base;
    }
    
    char first = s[0];
    string sub_s = s.substr(1);
    vector<string> res = gss(sub_s);
    int n = res.size();
    
    for(int i = 0; i < n; ++i)
    {
        res.push_back(first + res[i]);
    }
    return res;
}

int main(){
    string s;
    cin >> s;
    vector<string> ans = gss(s);
    int cnt = 0;

    cout << '[';
    for (string str : ans){
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}