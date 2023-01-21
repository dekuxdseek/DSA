/*
कर्मण्येवाधिकारस्ते मा फलेषु कदाचन।
मा कर्मफलहेतुर्भूर्मा ते सङ्गोऽस्त्वकर्मणि॥
*/

#include<algorithm>
#include<iostream>
#include<iterator>
#include<map>
#include<vector>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<numeric>
#include<queue>
#include<stack>



//Swastik Sharma
#define f                       first
#define s                       second
#define ll                      long long
#define pb                      push_back
#define mp                      make_pair
#define pii                     pair<int,int>
#define vi                      vector<int>
#define mii                     unordered_map<int,int>
#define me(i,start,end)         for(int i =start; i<end; ++i)
#define she(i,start,end)        for(int i =end-1; i>=start; --i)
#define all(v)                  v.begin() , v.end()
#define w(x)                    int x;cin>>x;while(x--)

using namespace std;


void solve()
{
    
    //2D prefix sums
    
    //for given matrix
    //m - number of rows in matrix, n - number of columns in matrix
    int m,n;   
    cin>>m>>n;
    int arr[m+1][n+1];
    
        // input of given matrix
        for(int i =1; i<m+1; ++i)
    {
        for(int j = 1; j<n+1; ++j)
        {
            cin>>arr[i][j];     //taking inpur value in ith row and jth column
        }
    }

        //computing prefix sum of given matrix
            int prefixSum[n+1][m+1] {};
        

            //using 1 based indexing
                for(int i = 1; i<m+1; ++i)
        {
            for(int j = 1; j< n +1; ++j)
            {
                // i =1 , j = 1
                // i-1 = 0, j-1 = 0     
                prefixSum[i][j] = prefixSum[i-1][j] + prefixSum[i][j-1] + arr[i][j] - prefixSum[i-1][j-1];
            }
        }

            /*using 0 based indexing
                
                    for(int i = 0; i <m; ++i)
        {
            for(int j = 0; j<n; ++j)
            {
                prefixSum[i][j] += a[i][j];

                if(i-1>=0) prefixSum[i][j] += prefixSum[i-1][j];
                if(j-1>=0) prefixSum[i][j] += prefixSum[i][j-1];
                if(i-1>=0 && j-1>=0) prefixSum[i][j] -= prefixSum[i-1][j-1];
            }
        }
                */

        //taking output of prefix 2d sum
        /*for(int i =1; i<m+1; ++i)   
    {
        for(int j = 1; j<n+1; ++j)
        {
            cout<<prefixSum[i][j]<<" ";     //taking output of value in ith row and jth column
        }cout<<endl;
    }
    */

        // int q;cin>>q;
        

        //sum of sub-matrix
        /*  //using o(q*n*m) approach
        while(q--)  //O(q)
        {
            int p,q,x,y;
            cin>>p>>q>>x>>y;
            //output sum of matrix [a...x], [b...y]

            int sum = 0;

            for(int i = p; i<=x; ++i)   //O(M)
            {
                for(int j =q; j<=y; ++i)    //O(N)
                {
                    sum += arr[i][j];
                }
            }
            cout<<sum<<endl;
        }   //  O(Q*M*N)
        */


       //using prefix 2d sum
       int queries;cin>>queries;
       while(queries--)
       {
        int p,q,x,y;
        cin>>p>>q>>x>>y;
        int top, bottom, left, right;
        top = min(p,x);
        bottom = max(p,x);
        left = min(q,y);
        right = max(q,y);

        cout<<prefixSum[bottom][right] - prefixSum[bottom][left-1] - prefixSum[top-1][right] + prefixSum[top-1][left-1]<<endl;
       }


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }return 0;
}
