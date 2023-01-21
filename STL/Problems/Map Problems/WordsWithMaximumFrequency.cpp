approach is already given at discord just need to do it.
//{ Driver Code Starts
#include <iostream>
#include<vector>
#include <map>
#include <algorithm>
#include <sstream>
#include<climits>

using namespace std;

string maximumFrequency(string s);

int main()
{
    int t;
    cin>>t;
    cin.ignore();

    for(int i =0; i<t; ++i)
    {
        string s;
        getline(cin,s);
        cout<<maximumFrequency(s)<<endl;
    }
}


string maximumFrequency(string s)
{
    map<string, int> m;
    string temp;
    
    for(int i =0; i<s.size(); ++i)
    {
        if(s[i] == ' ')
        {
            m[temp]++;
            temp.clear();
        }
        else
        {
            temp.push_back(s[i]);
        }
    }m[temp]++;
    
    //to get max element in map using max_element(.begin, .end, comp)
    //task is to declare comp, such that we cant get string on basis of max int value in map

    
}
