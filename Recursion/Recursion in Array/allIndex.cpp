#include <iostream>
#include <vector>
using namespace std;

// vector<int> ans;
// vector<int> allIndex(vector<int>& arr, int idx, int data, int count)
// {
//     if(idx == count)
//     {
//         return ans;
//     }
    
//     if(arr[idx] == data)
//     {
//         ans.push_back(idx);
//     }
    
//     vector<int> result = allIndex(arr, idx+1, data, count);
//     return result;
    
    
// }


vector<int> allIndex(vector<int>& arr, int idx, int data, int count)
{
    //base case
    if(idx == arr.size())
    {
        //declaring result array with size that of frequency of required data
        vector<int> result(count,0);
        return result;
    }
    
    
    // taking ct while going up 
    if(arr[idx] == data)
    {
        ++count;
    }
    
    //calling function to find count for remaining arr
    vector<int> result = allIndex(arr,idx+1,data,count);
    

    // checking if idx contains required el, while coming down
    if(arr[idx] == data)
    {
        // if it is there then storing in returned arr(declared during base case)
        result[--count] = idx;
    }
    //returning the changed/unchanged array which was declared during base case
    return result;
    
    
}

int main() {
  int n ;
  cin >> n;
  vector<int> arr;
  for (int i = 0; i < n; i++) {
    int d;
    cin >> d;
    arr.push_back(d);
  }
  int data;
  cin >> data;
  vector<int> ans = allIndex(arr, 0, data, n);
  if (ans.size() == 0) {
    cout << endl;
    return 0;
  }
  for (int ele : ans) cout << ele << endl;

  return 0;
}