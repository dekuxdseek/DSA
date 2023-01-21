#include <iostream>
using namespace std;

/*
    display array in order using recursion
*/




void display(int arr[], int idx, int n){
    // write your code here
    if(idx == n)return;
    cout<<arr[idx] << endl;
    display(arr,++idx,n);
    
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    display(arr, 0, n);
}
