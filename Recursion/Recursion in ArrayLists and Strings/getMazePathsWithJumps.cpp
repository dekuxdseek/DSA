#include<bits/stdc++.h>
using namespace std;

vector<string> getMazePathsWithJumps(int sr, int sc, int dr, int dc)
{
    if( sr == dr && sc == dc)
    {
        return {""};
    }
    else if(sr > dr)
    {
        return {};
    }
    else if(sc > dc)
    {
        return {};
    }


    vector<string> res;


    for(int i = 1; i <= dc-sc; ++i)
    {
        vector<string> h_paths = getMazePathsWithJumps(sr, sc+i, dr, dc);
        for(auto &val : h_paths)
        {
            res.push_back("h" + to_string(i) + val);
        }
    }


    for(int j = 1; j<= dr - sr; ++j )
    {
        vector<string> v_paths = getMazePathsWithJumps( sr+j , sc, dr,dc);
        for(auto &val : v_paths)
        {
            res.push_back("v" + to_string(j) + val);
        }
    }

    for(int k = 1; k <= dr-sr && dc-sc; ++k )
    {
        vector<string> d_paths = getMazePathsWithJumps(sr + k, sc +k, dr, dc);
        for(auto &val : d_paths)
        {
            res.push_back("d" + to_string(k) + val);
        }
    }
    return res;
}

int main()
{   
    // int t;
    // cin >> t;
    // while(t--)
    // {
        int n,m;
        cin >> n >> m;
        vector<string> res = getMazePathsWithJumps(0,0,n-1,m-1);
            cout << "[";
            for (int i = 0; i < res.size(); i++) {
            cout << res[i];
            if (i < res.size() - 1) cout << ", ";
            }
            cout << ']' << endl;
    // }
}