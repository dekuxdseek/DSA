#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        


        //prints in the brute force manner
        // for(int i = 1; i<=n; i++)
        // {
        //     if(n%i == 0) cout<<i<<endl;
        // }



        //prints in unsorted manner i, n/i
        for(int i =1; i<sqrt(n);i++)
        {
            if(n%i == 0)
            {
                if(n%i == i) cout<<i<<endl;
                else cout<<i<<endl<<n/i<<endl;
            }
        }


    //goes till n/2 and then prints last divisor i.e. n in the end    
    for(int i = 1; i<=n/2; i++)
    {
        if(n%i == 0)
        {
            cout<<i<<endl;
        }
    }
        cout<<n<<endl;
    }
}


/*
if (N%i ==0) then i, n%i are factors of n*/