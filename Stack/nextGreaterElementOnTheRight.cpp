#include<bits/stdc++.h>
using namespace std;



int main()
{
        int n;
        cin >> n;
        vector<int> a(n,0);
        vector<int> ans = a;
        for(auto &val: a)cin >> val;
        stack<int> st;
        st.push(a[n-1]);
        ans[n-1] = -1;

        for(int i = n-2; i>=0; --i)
        {
            // - a +
            while(st.size() >0 && a[i] >= st.top())
            {
                st.pop();
            }

            if(st.size() == 0)
            {
                ans[i] = -1;
            }
            else{
                ans[i] = st.top();
            }
            st.push(a[i]);
        }


        for(auto &val : ans)
        {
            cout << val << " ";
        }cout << endl;
}