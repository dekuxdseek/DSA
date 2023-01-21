#include<bits/stdc++.h>
using namespace std;

/*
    easy to represent it by using euler tree, instead using memory-stack approach
    
    for one function call, upper part of call is executed while going deep in recursion/ up in stack; 
                        and lower part of call is executed while coming out of recursion/ down in stack;

    for two function calls, first call is called left call, and second call is called right call;
                            part above first call is called pre,
                            part between first and second call is called in,
                        and part below second call is called post;
*/


void zigzag(int n)

{
    cout << "Pre" << n << endl;  
    zigzag( n - 1 );
    cout << "In" << n << endl;
    zigzag( n - 1 );
    cout << "Post" << n << endl;
}



int main()
{
    int n;
    cin >> n;
    zigzag(n);
    
}