#include<bits/stdc++.h>

using namespace std;

void explain_stack()
{
      //stack is something that LIFO -> Last in first out
      stack<int> s;

      s.push(1); //{1}
      s.push(2); //{2 , 1}
      s.push(3); //{3 , 2 , 1}
      s.push(4); //{4 , 3 , 2 , 1}
      s.push(5); //{5 , 4 , 3 , 2 , 1}

      cout<<s.top();  //it will print the first element which is inserted at the last means it will print 5

      cout<<s.pop(); //it will print {4 , 3 ,2 , 1}

      cout<<s.top(); //it will print 4

      cout<<s.size(); //as size is 4

      cout<<s.empty();

      //for swapping

      stack<int> s1 , s2;

      s1.swap(s2);
      
      //stack time complexity everything is constant so O(1)

}

int main()
{
      explain_stack();
      return 0;
}