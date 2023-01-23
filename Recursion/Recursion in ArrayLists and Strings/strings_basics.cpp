#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "we think in generalities, but we live in details.";

    string str2 = str.substr(3,5);  // think

    int pos = str.find("live");    // position of live in str
    int pos1 = str.find("l");
    // cout<< pos << pos1 << endl;

    string str1 = str.substr(pos1);
    string str3 = str.substr(pos);
    cout << str1 << endl << str3 << endl;
}