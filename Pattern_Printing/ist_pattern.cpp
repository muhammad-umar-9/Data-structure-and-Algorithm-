// *****
// *****
// *****
// *****
// *****

#include<iostream>
using namespace std;

void Pattern(int n)
{
      for(int i = 0; i < n; i++)  // this loop is responsible for printing rows
      {
            for(int j = 0; j < n; j++ ) //This loop is for column printing 
                                        //for each row we get the required number of columns to be printed.  
            {
                  cout<<"*";
            }

      // As soon as N stars are printed, we move to the
      // next row and give a line break otherwise all stars
      // would get printed in 1 line.

            cout<<endl;
      }

}
int main()
{
      int n , t;
      cout<<"For how many test cases you want to check "<<endl;
      cin>>t;
      cout<<"Enter N to print pattern N * N "<<endl;
      for(int i = 0; i < t; i++) //for test cases
      {
            cin>>n;
            Pattern(n);

      }

     


      return 0;
}