#include<bits/stdc++.h>

using namespace std;

void explain_vector()
{

      //syntax:
           // vector<object_type> variable_name;

      // vector<int> v;
      // v.push_back(1);
      // v.emplace_back(2);
  
      //as empace back is faster than push_back

      // vector< pair<int , int> > vec;
      // vec.push_back({1 , 2});
      // vec.emplace_back(1 , 3);

      // vector<int> v(5 , 100);
      // cout<<v[1];

      vector< int > v1(8);
      for(int i=0; i<5; i++)
      {
            cin>>v1[i];
      }
      for(int i=0; i<5; i++)
      {
            cout<<v1[i]<<endl;
      }

      // vector<int > v2(v); //we can also copy one vector to another
}
int main()
{
      explain_vector();

      return 0;
}