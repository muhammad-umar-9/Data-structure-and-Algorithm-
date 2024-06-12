#include<iostream>
using namespace std;
int optimized_sum(int x , int y)
{
      int n = (y - x + 1 );
      int result  =  (n * (2 * x +(n-1)*1))/2;
      return result;

}
int main()
{
       //here we use simple formula and calculate the sum
      cout<<optimized_sum(2 , 6);

      // int x , y , n , s , d;
      // cout<<"Enter x and y ";
      // cin>> x >> y;
      // n = (y - x + 1);
    
      // s = (n * (x + y)) / 2;
      // cout<<s;


}