#include<iostream>
using namespace std;
int main()
{
      //by changing input size is not growing 
      //so apart from the input and output space space complexity is O(1) ->constant
      //time complexity -> O(n)
      //we will not not consider input and output space
      int N = 8;
      int arr[N];
      int a = 0;
      int b = 1;
      int c = 1;
      if(N == 0 || N == 1)
      {
            return 0;
      }
      else
      {

      for(int i = 2; i<=N; i++)
      {
            c = a + b;
            a = b;
            b = c;
      }
      cout<<b;
      }
}