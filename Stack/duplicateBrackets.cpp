#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stack<char> st;
    for(int i = 0; i< s.length(); ++i)
    {

        if(s[i] == ' ')
        {
            s.erase(s.begin()+i);
        }
        
    }

    for(int i = 0; i < s.length(); ++i)
    {
        if(s[i] != ')')
        {
            st.push(s[i]);
        }
        else
        {
            if(st.top() == '(')
            {
                cout << "true" << endl;
                return 0;
            }
            else{
                while(st.top()!='(')
                {
                    st.pop();
                }
                st.pop();
            }
        }
    }
    cout << "false" << endl;
    return 0;
   
}