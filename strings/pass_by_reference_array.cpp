#include<iostream>
using namespace std;
void do_something(int arr[] , int n)
{
      arr[0] = arr[0] + 100 ;

      cout<<"Value inside function "<< arr[0] <<endl;
}


int main()
{
      int n = 5;
      int arr[n];

      for (int i = 0; i < n; i++)
      {
            cin>>arr[i];
      }

      do_something(arr , n);

      cout<<"Value inside int main "<< arr[0] <<endl;
      

      return 0;
}