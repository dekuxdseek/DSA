#include<bits/stdc++.h>

using namespace std;


void print_sum(vector<vector<int>>&a, vector<vector<int>>&b, int r, int c, int R, int C)
{
    if(r == R) return;
    if(c == C){
        cout << endl;
        print_sum(a,b,r+1,0,R,C);
        return;
    } 

    cout<< a[r][c] + b[r][c] <<" ";
    print_sum(a,b,r,c+1,R,C);
    
}



int main()
{
    int r,c;
    cin >> r >> c;
    vector<vector<int>>a(r,vector<int>(c,0));
    vector<vector<int>>b(r,vector<int>(c,0));
    for(auto &i: a)
    {
        for(auto &j: i)
        {
            cin >> j;
        }
    }

    for(auto &i: b)
    {
        for(auto &j: i)
        {
            cin >> j;
        }
    }

    print_sum(a,b,0,0,r,c);
}