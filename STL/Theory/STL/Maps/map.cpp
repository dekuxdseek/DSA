#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
#include<map>
using namespace std;

void printMap(map<int,int> const &m)
{
    //traversal is in O(n) time
    cout<<m.size()<<endl;
    for(auto &val : m)
    {
        cout<<val.first<<" "<<val.second<<endl;
    }
}

int main()
{
   map<int, int> m;
    m[1] = 999; // O(long(n)) //s.size() * log(n)
    m[2] = 2601;
    m[3] = 8632657;
    m.insert({5,1745});
    m.insert({4,39075});
    m[6];
    m[8];
    printMap(m);

    //O(log n)
    auto it = m.find(7);    //returns it of key if key is there in map, else returns .end iterator
    
    if(it == m.end())
    {
        cout<<"No value"<<endl;
    }else{
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

    m.erase(3);  //takes value of key/iterator
    printMap(m);

    auto i = m.find(8);
    if(i != m.end())
    {
        m.erase(i);
    }

    
    m.clear();
    cout<<endl;
    printMap(m);



}

//insert,delete, access in log n time