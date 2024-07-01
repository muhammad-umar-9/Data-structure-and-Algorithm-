#include<bits/stdc++.h>

using namespace std;

void explain_pair()
{
      pair<int , int> p ={1 , 3};
      cout<<p.first<< "  " << p.second << endl;

      //we can also use nested pair
      pair<int , pair<int , int >> p1 = {1 , {3 , 4}};
      cout<<p1.first << "  "<< p1.second.second << " "<<p1.second.first << endl;

      //we can also declare array

      pair<int , int > arr[] ={ {1 , 2 } , {3 , 4} , {5 , 1} }; //as they are store at index 0 , 1 and 2
      cout<<arr[1].second;
}

int main()
{

      explain_pair();

      return 0;
}