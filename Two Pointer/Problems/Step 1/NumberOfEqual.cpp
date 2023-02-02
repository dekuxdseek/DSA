#include<bits/stdc++.h>
using namespace std;



// int main()
// {
//     int n, m;
//     cin >> n >> m;

//     vector<int> a(n,0);
//     vector<int> b(m,0);

//     for(auto &val: a)cin >> val;
//     for(auto &val: b)cin >> val;

    
//     int sum = 0;
//     int i =0 , j  =0;
    

//     while(j<b.size() && i<a.size())
//     {
//         if(a[i] < b[j])++i;

//         if(b[j] < a[i])++j;

//         if(a[i] == b[j])
//         {
//             int cti = 0, ctj = 0;
            
//             while(a[i] == a[i+1] && i<n )
//             {
//                 cti++;
//                 ++i;
//             }



//         }
        
//     }
//     cout << sum << endl;






// }




// #include<bits/stdc++.h>
// using namespace std;



// int main()
// {
//     long long n, m;
//     cin >> n >> m;



//     map<long long , long long > a;
//     map<long long , long long > b;

//     while(n--)
//     {
//         long long  el ;
//         cin >> el;
//         a[el]++;
//     }
//      while(m--)
//     {
//         long long el ;
//         cin >> el;
//         b[el]++;
//     }

//     auto ita = a.begin();
//     auto itb = b.begin();


//     long long sum = 0;
  

//   while(ita != a.end() && itb != b.end())
//   {
//     if((*ita).first < (*itb).first)ita++;

//     else if ((*ita).first > (*itb).first) ++itb;

//     else

//     {
//         sum += ( ((*ita).second) * ((*itb).second) );
//         ++ita;
//         ++itb;
//     }
//   }
//   cout << sum << endl;

    





// }


// int main()
// {
//     long long n, m;
//     cin >> n >> m;

//     vector<int> a(n,0);
//     vector<int> b(m,0);

//     for(auto &val: a)cin >> val;
//     for(auto &val: b)cin >> val;

    
//     long long sum = 0;
//     int i =0 , j  =0;

//     while(j<b.size() && i<a.size())
//     {
//         if(a[i] < b[j])++i;
//         else if(b[j]<a[i])++j;

//         else //(a[i] == b[j])
//         {
//             long long fi = 1, fj = 1;
            
//             while(b[j] == b[j+1] && j+1 < m)
//             {
//                 ++j;
//                 ++fj;
//             }
            
            
//             while(a[i] == a[i+1] && i+1 < n)
//             {
//                 ++i;
//                 fi++;
//             }
                
                
//                     ++i;++j;
//                     sum += (fi*fj);
//                     fi=1;
//                     fj = 1;
                
            
//         }
        
//     }
//     cout << sum << endl;






// }




#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n,0);
    vector<int> b(m,0);

    for(auto &val: a)cin >> val;
    for(auto &val: b)cin >> val;

    long long fj =1, fi=1 ;
    long long sum = 0;
    int i =0 , j  =0;

    while(j<b.size() && i<a.size())
    {
        if (a[i] < b[j] ) ++i;
        else if(a[i] > b[j]) ++j;

        else //if(a[i] == b[j])
        {
            if(b[j] == b[j+1] && j+1 < m)
            {
                ++j;
                ++fj;
            }

            else 
            {
              if(a[i] == a[i+1] && i+1 < n)
              {
              fi++;
              ++i;   
              }
            
              else//(b[j] != b[j+1] && a[i] != a[i+1])
              {
                sum+= (fi*fj);
                fi = 1;
                fj = 1;
                ++i;
                ++j;
              }
            }

        }

        
        
    }
    cout << sum << endl;






}