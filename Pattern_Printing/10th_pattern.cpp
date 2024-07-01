// *
// * *
// * * *
// * * * *
// * * * * *
// * * * * 
// * * * * 
// * * * 
// * * 
// * 
//As this pattern is combination of pattern 2 and 5 , so just cobie both and print

#include<iostream>
using namespace std;

void pattern_2(int n)
{
      for(int i = 1; i <= n; i++)
      {
            for( int j = 0; j < i ; j++  )
            {
                  cout<< " * " ;
            }
            cout<<endl;
      }

}
void pattern_5(int n)
{
      for(int i = 0; i < n; i++)
      {
            for( int j = 0; j < n-i+1 ; j++ )
            {
                  cout<< " * " ;
            }
            cout<<endl;
      }

}
int main()
{
      int n;
      cout<<"Enter N to print pattern  "<<endl;
      cin>>n;
      pattern_2(n);
      pattern_5(n);

      return 0;

}