#include<iostream>
using namespace std;
int main()
{
      int arr[10] = {1 , 2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,7 };
      int temp[10] = {0};
      for (int i = 0; i < 10; i++)
      {
            
            if(temp[arr[i]] == 1)
            {
                  cout<<"Duplicate element "<<arr[i];
                  break;
            }
            temp[arr[i]] = 1;
      }
      

      return 0;
}