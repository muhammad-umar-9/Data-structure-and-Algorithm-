#include<iostream>
using namespace std;
int main()
{
      //Space complexity of a fibannocci sequence 
      //w.r.t change in input the space we took is also changes 
      //As here N = 8 so space will be n+1 and for N= 81 space = n+1
      //so , space complexity will be O(n)
      int N = 8;
      int a[N];
       a[0]={0};
       a[1]={1};
      for(int i=2; i<=N; i++)
      {
            a[i] = a[i-1] + a[i-2];
            
      }
      for(int i=0; i<=N; i++)
      {
            cout<<a[i]<<"  ";
      }
      cout<<endl;
      
      return 0;
}