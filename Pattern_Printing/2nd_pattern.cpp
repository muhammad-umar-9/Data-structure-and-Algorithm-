// *
// * *
// * * *
// * * * *
// * * * * *
// * * * * * *

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

int main()
{
      int n;
      cout<<"Enter N to print pattern  "<<endl;
      cin>>n;
      pattern_2(n);

      return 0;

}
