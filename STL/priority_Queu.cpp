#include<bits/stdc++.h>
using namespace std;

void Explain_PQ()
{     //This come in terms as MAX_HEAP
      //inside of this tree data structure is maintain
      //largest element stay at the top
      priority_queue<int> pq;

      pq.push(10);
      pq.push(6);
      pq.push(2);
      pq.push(4);

      cout<<pq.top()<<endl; //it will print the larger element as 10

      pq.pop(); //it will delete the larger element

      cout<<pq.top(); //now it will print 6

      //if we want to maintain the priority order that first smaller and the larger then
      //we use following syntax

      //As this terms as MINIMUM_Heap
      priority_queue<int , vector<int> , greater<int> > p1;

      p1.push(3);
      p1.push(10);
      p1.push(5);
      p1.push(2);

      p1.top();  //as here it will print 2
      cout<<p1.top();

      //Time Complexity for priority_Queue
      // push() -> O(logn)
      // top()  -> O(1) means constant
      // pop()  -> O(logn) 


}

int main()
{
      Explain_PQ();

      return 0;
}

