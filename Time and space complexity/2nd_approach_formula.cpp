#include<iostream>
using namespace std;
int main()
{
       //here we use simple formula and calculate the sum
      int x , y , n , s , d;
      cout<<"Enter x and y ";
      cin>> x >> y;
      n = (y - x + 1);
      d = y - x ;
      s = (n * (x + y)) / 2;
      cout<<s;


}