#include<bits/stdc++.h>

using namespace std;
void explain_Que()
{
      //Que is something FIFO -> First in First out
      queue<int> q;
      q.push(4);
      q.push(5);
      q.push(6);
      q.emplace(5);
      
      
      //to print the elements
      // while(!q.empty())
      // {
      //       cout<<q.front()<<" ";  //print
      //       q.pop(); // delete
      // }


      q.back() += 4;

      cout<<q.back(); //it will print the last element

      q.pop(); //it will delete the front one as here 4


    //  cout<<q.front();
      
     //all other swap function are same as in stack
     //TIME COMPLEXITY of Queue is O(1) -> means constant


}

int main()
{
      explain_Que();

      return 0;
}