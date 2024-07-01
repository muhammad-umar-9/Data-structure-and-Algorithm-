//            *
//          * * *
//        * * * * *
//      * * * * * * *
//      * * * * * * *
//        * * * * *
//          * * * 
//            *   
// As this is combination of pattern number 7 and 8 , so just combine both of them
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
void pattern_8(int n)
{
      // This is the outer loop which will loop for the rows.
      for(int i = 0; i < n; i++)
      {
            // For printing the spaces before stars in each row
            //as spaces are i times 
            for( int j = 0; j < i ; j++ )
            {
                  cout<< " " ;
            }
            
            // For printing the stars in each row
            for(int j = 0; j< 2*n - (2*i + 1); j++)
            {
                  cout<<"*";
            }

            // For printing the spaces after the stars in each row
            for(int j = 0; j < i; j++ )
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
      pattern_8(n);

      return 0;

}