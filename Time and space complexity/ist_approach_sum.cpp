#include<iostream>
using namespace std;
int range_sum(int x , int y)
{
      int result = 0;
      for(int i=x; i<=y; i++)
      {
            result = result + i;
      }
      return result;
}
int main()
{
      // in this approach loop is iterate so many time  from x to x+1 and from x+1 to x+2 and so on.....
      cout<<range_sum(2 , 6);
      // int x , y;
      // cout<<"Write x and y ";
      // cin>> x >> y ;
      // int temp = 0;
      
      // for(int i=x; i<=y; i++)
      // {
      //       temp = temp + i;
      // }
      // cout<<temp;

      return 0;
}
