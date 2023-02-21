#include<bits/stdc++.h>
using namespace std;



int main()
{
    string s;
    getline(cin,s);
    for(int i = 0; i < s.length(); ++i)
    {
        if(s[i] == ' ')
        {
            s.erase(s.begin()+i);
        }
    }

    stack<char> st;

    for(int i = 0; i< s.length(); ++i)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] =='[')
        {
            st.push(s[i]);
        }

        else if(s[i] == ')')
        {
            if(st.size() == 0)
            {
                cout << "false" << endl;
                return 0;
            }else if(st.top() == '(')
            {
                st.pop();
            }
            else{
                cout << "false" << endl;
                return 0;
            }
        }
        else if(s[i] == '}')
        {
            if(st.size() == 0)
            {
                cout << "false" << endl;
                return 0;
            }else if(st.top() == '{')
            {
                st.pop();
            }
            else{
                cout << "false" << endl;
                return 0;
            }

        }
        else if(s[i] == ']')
        {
            if(st.size() == 0)
            {
                cout << "false" << endl;
            }else if(st.top() == '[')
            {
                st.pop();
            }
            else{
                cout << "false" << endl;
                return 0;
            }

        }
    }

    if(st.size() != 0)
    {
        cout << "false" << endl;
        return 0;
    }
    cout << "true" << endl;
    return 0;
    
    
}

