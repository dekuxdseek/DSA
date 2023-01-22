#include <iostream>
using namespace std;

int lastIndex(int arr[], int idx, int x, int n){
    // write your code here
    if(idx == n) return -1;
    int i = lastIndex(arr, idx + 1, x, n);
    
    if( i == -1 && arr[idx] == x)
    {
        i = idx;
    }
    return i;
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