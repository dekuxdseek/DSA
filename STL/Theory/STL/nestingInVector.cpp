#include<iostream>
#include<vector>
using namespace std;
void printVec(vector<int> &v)
{
    cout<<v.size()<<endl;
    for(int i =0; i<v.size(); ++i)
    {
        
        cout<<v[i]<<" ";
    }cout<<endl;
}
int main()
{
    
/*---------------------------------------------------------------------------------------------------------------------------------------------*/
    //vector of pairs
/*---------------------------------------------------------------------------------------------------------------------------------------------*/
    // vector<pair<int,int>> v = {{1,10} , {2,9} , {3,8}};
    // printVec(v);
    // int x, y;
    // cin>>x>>y;
    // v.push_back({x,y});
    // printVec(v);

    // int a, b;
    // cin>>a>>b;
    // v.push_back(make_pair(a,b));
    // printVec(v);

/*---------------------------------------------------------------------------------------------------------------------------------------------*/
    //array of vector
/*---------------------------------------------------------------------------------------------------------------------------------------------*/
//     int N;
//     cin>>N;
//     vector<int> bector[N];  //ten vectors with size = zero
//     for(int i =0; i<N;++i)
//     {
//         int n;
//         cin>>n;
//         for(int j =0; j<n; j++)
//         {
//             int el;
//             cin>>el;
//             bector[i].push_back(el);
//         }
//     }

//     for(int i =0; i<N; ++i){
//         printVec(bector[i]);
// }

/*---------------------------------------------------------------------------------------------------------------------------------------------*/
//vectors of vectors
/*---------------------------------------------------------------------------------------------------------------------------------------------*/

    vector<vector<int>> vecture;
    int N;
    cin>>N;
    for(int i =0; i<N; i++)
    {
        vector<int> temp;
        int n;
        cin>>n;
        for(int j = 0; j<n;++j)
        {
            int el;
            cin>>el;
            temp.push_back(el);
        }
        vecture.push_back(temp);
    }
    vecture[2].push_back(69);
    vecture.push_back(vector<int>());   //pushing empty vector

    for(int i = 0; i<vecture.size(); ++i)
    {
        printVec(vecture[i]);
    }
    

}