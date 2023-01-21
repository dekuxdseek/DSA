#include<bits/stdc++.h>
using namespace std;

/*

*/
void toh(int d, int t1, int t2, int t3)
{
    if( d == 0) return;
    toh(d-1,t1,t3,t2);  // to print instructions to move n-1 disks, from t1 to t3 using t2
    cout<<d << " from [" << t1 <<" to " <<t3 << "]"<<endl;
    
    toh(d-1,t3,t2,t1);
}



int main()
{
    int disks;
    cin >> disks;
    int t1 =1 , t2 =2 , t3 =3;
    cin >> t1 >> t2 >> t3;
    toh(disks,t1,t2,t3);
}