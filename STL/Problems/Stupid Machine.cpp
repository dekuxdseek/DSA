#include <bits/stdc++.h>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long long arr[n];
	    for(int i =0; i<n; i++)
	    {
	        cin>>arr[i];
	    }
	    
	    long long m = INT_MAX;
        long long count = 0;
	    
        for(int i = 0; i<n; i++)
        {
            m = min(m,arr[i]);
			count += m;
        }
		cout<<count<<endl;
	    
	}
	return 0;
}

/*
int mn = INT_MAX;
for(0 -> n-1)
mn = min(arr[i], mn)
ans += mn;
*/
