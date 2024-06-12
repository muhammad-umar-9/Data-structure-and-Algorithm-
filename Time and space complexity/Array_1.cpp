#include<iostream>
using namespace std;
int main()
{     //check points
      //->Worst Case is that we iterate whole array and we not find the element 
      //in above case we do n-instructions 
      //->Best Case we find element at first index
      //->Average case we find element at any mid index

      int arr[] = { 1 , 2 ,3 , 4, 5, 6};
      int size = sizeof(arr) / sizeof(arr[0]);
      int x = 3;
      bool check = false;
      for(int i = 0; i<size; i++)
      {
            if(arr[i] == x)
            {

                  cout<<"Element Found at index "<< i <<" value is"<<arr[i];
                  check = true;
                  break;
            }
            
      } 
      if(!check)
      {
            cout<<"element not found ";
      }
      return 0;
}