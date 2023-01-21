#include <bits/stdc++.h>
using namespace std;

int max(int arr[], int idx, int n){
    // write your code here
    if(idx == n) return INT_MIN;
    int inter_max = max(arr,idx+1,n);
    inter_max = max(inter_max,arr[idx]);
    return inter_max;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int p = max(arr, 0, n);
    cout << p << endl;
}
