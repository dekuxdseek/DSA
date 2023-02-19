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
        st.push(s[i]);
    }


    while(!st.empty())
    {
        if(st.top() == ')')
        {
            st.pop();
            if(st.top() == '(' )
            {
                cout << "false" << endl;
                return 0;
            }
            else{
                while(st.top() != '(')
                {
                    st.pop();
                }
                st.pop();
            }
        }
        else{
            st.pop();
        }
    }

    cout << "true" << endl;


   
}