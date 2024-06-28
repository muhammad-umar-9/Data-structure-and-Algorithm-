// *
// * *
// * * *
// * * * *
// * * * * *
// * * * * * *

#include<iostream>
using namespace std;

void pattern(int n)
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
      pattern(n);

      return 0;

}
