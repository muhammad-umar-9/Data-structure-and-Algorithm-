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
     // vector<int>::iterator it = v.end();  //refers to the memory location right after the last element

      //we can also use iterator to print 
      //as v.begin() starting point and v.end() is last point 

      for(vector<int >::iterator it = v.begin(); it!=v.end(); it++ )
      {
            cout<<*(it);
      }

      //there is also shortcut to print it
      //as auto refers to the vector iterator
// -> auto is assign automatically data type like by writng -> auto a = 5; it assign integer
      for(auto it = v.begin(); it!=v.end(); it++ )
      {
            cout<<*(it);
      }

      //also we can use for each loop

      for(auto it : v)
      {
            cout<< it << " ";
      }

      //now we can delete
     // {10 , 20 ,30 ,40 ,50} 
      v.erase(v.begin() + 1); //so it will delete 20

      //if i want to delete couple elements 

      v.erase( v.begin()+1 , v.begin()+4 ); //new vector will be {10 , 50}

      //insert function

      vector<int> v(2 , 100); //{100 ,100}
      v.insert(v.begin()+1 , 200); //{100 , 200 , 100}

      //here 2 represent occurences of 2 times of 10

      v.insert(v.begin()+1 , 2 , 30); //{100 , 30 , 30 ,100}

      //how can we copy the value
      //{100 , 30 , 30 ,100}
      v.copy(2 , 50); 
      v.insert(v.begin() , copy.begin() , copy.end()); //{50 , 50 , 100 , 30 , 30 ,100}

      v.size(); //give us the size of vector

      //v1->{10 , 20}
      //v2->{30 , 40}
      v1.swap(v2); //so now v1-> {30 , 40} and v2-> {10 , 20}

      v.clear(); //erase the entire vector

      cout<<v.empty();  //as it will be give us result in terms of true and false

}
int main()
{
      explain_iterator();


      return 0;
}