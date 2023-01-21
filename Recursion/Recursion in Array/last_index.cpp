#include <iostream>
using namespace std;

int lastIndex(int arr[], int idx, int x, int n){
    // write your code here
    if(idx == n) return -1;
    int var = lastIndex(arr, idx + 1, x, n);
    
    if( var == -1 && arr[idx] == x)
    {
        var = idx;
    }
    return var;
}

int main(){
    int n;
    cin >> n;
    int d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> d;
    int p = lastIndex(arr, 0, d, n);
    cout << p << endl;
}