  #include<bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    vector<int> v = { 3,6,2,9,0};
    for(int i =0; i<v.size();++i) cout<<v[i]<<" ";
    cout<<endl;
    
    vector<int>:: iterator it;
    it = v.begin();
    for( it =v.begin(); it<v.end();++it)
    {
        cout<<*it<<" ";
    }cout<<endl;
    cout<<v.capacity()<<endl;

    //it++ - next iterator 
    //it+1 - next location
    //same for vector, but changes for maps,sets as the iterators are in non-continuos locations


    cout<<endl;
    vector<int> vectore;
    vectore = {1,10,2,9,3,8};

    vector<int> :: iterator iter;
    for(iter = vectore.begin(); iter!=vectore.end(); ++iter)
    {
        // cout<<(*iter).first<<" "<<(*iter).second<<endl;

        // cout<<iter->first<<" "<<iter->second<<endl;
        cout<<*iter<<" ";
    }cout<<endl;

    //  (*it).first <=> (it -> first)

    //range based loops

    for(int value : vectore)
    {
      value++;
      cout<<value<<" ";
    }cout<<endl;

    //auto keyword for automatic determining of datatype of variable
    auto a = 1;
    auto s = 'swastik';
    auto s = 4.2; //auto keyword

    auto it = v.begin(); //instead of vector<int> :: it = v.begin()

    for(auto i : vectore)
    {
      cout<<i<<endl;
    }

  }
