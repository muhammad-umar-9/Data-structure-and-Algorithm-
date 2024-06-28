// 1
// 1 2
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5

#include<iostream>
using namespace std;

void pattern(int n)
{
      for(int i = 2; i <= n; i++)
      {
            for( int j = 1; j <= i ; j++  )
            {
                  cout<< j ; //simply inner loop increment
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
