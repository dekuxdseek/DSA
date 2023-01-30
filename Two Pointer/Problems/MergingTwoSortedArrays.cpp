#include<bits/stdc++.h>
using namespace std;

/* Merging two sorted arrays */



int main()
{
   int n, m;
   cin >> n >> m;
   vector<int> a(n,0);
   vector<int> b(m,0);

   for(auto &val: a)cin >> val;
   for(auto &val: b)cin >> val;

   vector<int> result(n+m,0);

   int i = 0, j = 0, k = 0;

   while(i < a.size() || j < b.size())
   {
    if(a[i]<b[j] && i < a.size() || j == b.size())
    {
        result[k] = a[i];
        k++; ++i;
    }
    else{
        result[k] = b[j];
        k++; ++j;
    }
   }

   for(auto &val: result)cout << val << " ";
   cout << endl;
}