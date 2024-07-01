#include<bits/stdc++.h>

using namespace std;

void explain_iterator()
{
      vector<int> v(5);

      v.assign({10 , 20 ,30 ,40 ,50});
      vector<int>::iterator it = v.begin();

      it++;
      cout<< *(it) <<endl;
      it = it + 2 ;
      cout<< *(it) <<endl;

      //As here v.end() does not mean that it points to the end location
      //if we put it-- then it will point to end location
      vector<int>::iterator it = v.end();  //refers to the memory location right after the last element

      
     
}
int main()
{
      explain_iterator();


      return 0;
}