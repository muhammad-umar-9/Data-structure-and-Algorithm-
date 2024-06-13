#include<iostream>
using namespace std;
int main()
{
      //here we have to notice one thing that changing # of operations w.r.t input
      int n = 5;
      for (int i = 0; i < n; i++)
      {
            for(int j=0; j < n ; j++) //for i=0 , j loop do order of n-iterations
                                      //for i=1 , j loop do order of n-iterations and so on
                                      //total operations will be n^2 because n-operations for
                                      //i-loop and n for j-loop so, total = n*n = n^2
                                      //time complexity will be O(n^2)
            {
                  cout<<"*";
            }
            cout<<endl;
      }
      
}
