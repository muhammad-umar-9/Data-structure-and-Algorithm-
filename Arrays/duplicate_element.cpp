#include<iostream>
using namespace std;
int main()
{
      int size;
      
      cout<<"Enter array size "<<endl;
      cin>>size;
      int arr[size];
      cout<<"Enter elements of array "<<endl;
      for(int i=0; i<size; i++)
      {
            cin>>arr[i];
      }
      bool duplicate_element = false;

      for(int i = 0; i<size-1; i++)
      {
            if(arr[i] == arr[i+1] )
            {
                  cout<<"Duplicate element "<<arr[i];
            }
           bool duplicate_element = true; 
           
      }


      return 0;
}