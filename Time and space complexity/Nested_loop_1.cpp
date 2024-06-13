#include<iostream>

using namespace std;
int main()
{
      //here we have to notice one thing that changing # of operations w.r.t input
      int n = 5;
      for (int i = 0; i < n; i++)
      {
            for(int j=0; j < i ; j++) //for i=0 , j = 0 loop do order of 0-iterations
                                      //for i=1 , j = 1 loop do order of 1-iterations and so on
                                      //total operations will be 0+1+2+3+.....+n-1
                                      //sum of n-1 term is n(n-1)/2 = n^2/2 = n^2
                                      //time complexity will be O(n^2)
            {
                  cout<<"*";
            }
            cout<<endl;
      }
      
}
