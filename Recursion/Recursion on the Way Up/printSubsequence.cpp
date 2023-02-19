#include<bits/stdc++.h>
using namespace std;


void printSS(string ques, string ans)
{
    // if(ques == "")
    // {
    //     cout << ans << endl;
    // }

    

    // string ans_no = ans;
    // cout << ans_no << endl;
    // string ans_yes = ans;
    // ans_yes.push_back(*(ques.begin()));


    // ques.erase(ques.begin());

    // // choice 0
    // printSS(ques,ans_no);
    
    // // choice 1
    // printSS(ques,ans_yes);

    if(ques.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    string ch;
    ch.push_back(*ques.begin());

    string roq = ques.substr(1);

    printSS(roq, ans+ch);
    printSS(roq, ans+"");
    
    
}

int main()
{
    string s;
    cin >> s;
    printSS(s, "");
}