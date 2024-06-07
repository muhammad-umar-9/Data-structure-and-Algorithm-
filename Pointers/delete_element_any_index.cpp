#include<iostream>
using namespace std;
int main()
{
      int a[] = {2 , 3 , 4 ,5 , 6 , 7};
      int n = sizeof(a) / sizeof(a[0]);
     // int index_to_delete = 2;

      cout<<"orignal array"<<endl;
       for(int i = 0 ; i<n ; i++)
      {
            cout<<a[i]<<"  ";
      }
      cout<<endl;
      for(int i = 2 ; i<n-1;  i++) //start from index at which you delete the element 
                                   //move backshift element
      {
            a[i] = a[i+1];
      }
      n--;
      cout<<"Modified array"<<endl;
      
      for(int i = 0 ; i<n ; i++)
      {
            
            cout<<a[i]<<"  ";
      }
      
      return 0;
}