#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int b_size = b.size();
    
    //concatenating string b behind string a
    for(int i = 0; i < b_size; ++i)
    {
        a.push_back(b[i]);
    }

    //rotating string a(concatenated) left,  b_size times
    //so that we can get elements in order
    reverse(a.begin(),a.end());
    reverse(a.begin(),a.begin()+b_size);
    reverse(a.begin() + b_size, a.end());

    b.erase();

    for(int i = b_size; i < a.size(); ++i)
    {
        b.push_back(a[i]);
    }
    
    int n = a.size() - b_size;

    while(n--)
    {
        a.pop_back();
    }
    
    cout <<a << " " << b << endl;

    

    


}