#include<iostream>
using namespace std;
int main()
{
      //Time complexity will be O(n + m)
      
      int a1[] = {1 , 2, 3, 4 ,5 ,6 ,7 ,8};
      int n = sizeof(a1) / sizeof(a1[0]); //size is 8
      int sum1 = 0;
      int a2[] = {1 , 2, 3, 4 ,5 ,6 ,7 ,8 , 9 , 10};
      int m = sizeof(a2) / sizeof(a2[0]);   //size is 10
      int sum2 = 0;
       
      for(int i = 0; i<n; i++)
      {
            sum1 = sum1 + a1[i];
      } 

      for(int i = 0; i<m; i++)
      {
            sum2 = sum2 + a2[i];
      }

      cout<<"Sum 1 is : "<< sum1 <<"  "<<"Sum2 is : "<< sum2 ;
      return 0;
}