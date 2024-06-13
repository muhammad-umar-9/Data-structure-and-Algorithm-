#include<iostream>
#include<cmath>
using namespace std;
int main()
{
      //here we have to notice one thing that changing # of operations w.r.t input
      int n = 5;
      for (int i = 0; i < n; i++)
      {
            for(int j=0; j <sqrt(n)  ; j++) 
            {
                  cout<<"*";
            }
            cout<<endl;
      }
      /*
       i = 0; j=sqrt(n) instructions
       i = 1; j=sqrt(n) instructions
       i = 2; j=sqrt(n) instructions
       i = 3; j=sqrt(n) instructions
       i = 4; j=sqrt(n) instructions
       .
       .
       .
       .
       i=n-1 ; j = sqrt(n) instructions
       total = n*sqrt(n)
       worst time complexity -> O(nsqrt(n))

      */
      
}
