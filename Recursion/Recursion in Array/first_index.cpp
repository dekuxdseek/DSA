#include<bits/stdc++.h>
using namespace std;

int firstIndex(int arr[], int idx, int x, int n){
    // write your code here
    // if(idx == n) return -1;
   
    // int index = firstIndex(arr,idx+1,x,n);

    //  if(arr[idx] == x) index = idx;

    // return index;

    if(idx == n) return -1;

    if(arr[idx] == x)
    {
        return idx;
    }
    else{
        int var = firstIndex(arr,idx+1,x,n);
        return var;
    }
 
    
    
}

int main()
{
    int n;
    cin >> n;
    int d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> d;
    int p = firstIndex(arr, 0, d, n);
    cout << p << endl;
}