#include<bits/stdc++.h>
using namespace std;



unordered_set<int> st;


int fib(int global, int n)
{
    if(global == 1) {st.insert(1); return 1;}
    if(global == 0) {st.insert(0); return 0;}

    int first = fib(global-1,n);
    int second = fib(global-2,n);

    if((first + second) <= n){
       st.insert(first+second);
    }

    
    return first + second;
    
}

int main()
{
    int n;
    cin >> n;   // to print fibo series till fib_i <= n, where fib_i is a digit in fibo series
    int a = fib(20, n);
    for(auto &val: st)cout << val << endl;
}