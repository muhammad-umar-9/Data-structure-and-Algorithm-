//        *
//      * * *
//    * * * * *
//   * * * * * * *

#include<iostream>
using namespace std;

void pattern_7(int n)
{
      // This is the outer loop which will loop for the rows.
      for(int i = 0; i < n; i++)
      {
            // For printing the spaces before stars in each row
            for( int j = 0; j < n-i-1 ; j++ )
            {
                  cout<< " " ;
            }
            
            // For printing the stars in each row
            for(int j = 0; j < 2 * i + 1; j++)
            {
                  cout<<"*";
            }

            // For printing the spaces after the stars in each row
            for(int j = 0; j < n-i-1; j++ )
            {
                  cout<<" ";
            }

            cout<<endl;
      }

}

int main()
{
      int n;
      cout<<"Enter N to print pattern  "<<endl;
      cin>>n;
      pattern_7(n);

      return 0;

}
