#include<iostream>
using namespace std;
int main()
{
      // in this approach loop is iterate so many time .....
      int x , y;
      cout<<"Write x and y ";
      cin>> x >> y ;
      int temp = 0;
      
      for(int i=x; i<=y; i++)
      {
            temp = temp + i;
      }
      cout<<temp;

      return 0;
}
