#include<bits/stdc++.h>

using namespace std;

void explain_set()
{
      //Set store everything in sorted and unique order
      set< int > st;
      st.insert(4); //{4}
      st.insert(1); //{1 , 4}
      st.emplace(6); //{1 , 4 , 6}
      st.insert(6);  //{1 , 4 , 6}
      st.insert(2);  //{1 , 2 , 4 , 6}

     //we use iterator to print it out
     for(auto it = st.begin();  it!= st.end();  it++)
     {
      cout<<*(it)<<" ";
     }

     //{1 , 2 , 4 , 6}
     auto it = st.find(3);

     //{1 , 2 , 4 , 6}
     auto it = st.find(7);

     st.erase(4); //it will erase 4

     auto it1 = st.find(1);
     auto it2 = st.find(6);
     st.erase(it1 , it2);

     //also there are lower bond and upper bond 

     auto it = st.lower_bound(3);
     auto it = st.lower_bound(5);

     //Time complexity of set is O(logn)

}

int main()
{
      explain_set();

      return 0;
}