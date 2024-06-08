#include<iostream>
using namespace std;

//to delete the last element of array

int main()
{
      int a[] = {2 , 3 , 4 ,5 , 6 , 7};
      int n = sizeof(a) / sizeof(a[0]);

      cout<<"orignal array"<<endl;
       for(int i = 0 ; i<n ; i++)
      {
            cout<<a[i]<<"  ";
      }
      cout<<endl;
      // for(int i = 0 ; i<=n-2; i++)
      // {
      //       a[i-1] = a[i];
      // }
      n--;
      cout<<"Modified array"<<endl;
      
      for(int i = 0 ; i<n-2 ; i++)
      {
            
            cout<<a[i]<<"  ";
      }
      
      return 0;
}