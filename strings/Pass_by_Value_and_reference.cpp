#include<iostream>
using namespace std;
/*
void  do_some_thing(int num)
{
      cout<< num <<endl;;
      num = num + 5;
      cout<< num <<endl;
      num = num + 5;
      cout<< num <<endl; 

}
int main()
{
      //pass by value
      int num = 10;
      do_some_thing(num); //as here num copy created and pass to the above function

      cout<<num; //but here the orignal value is printed 
      
      return 0;
}

*/
 // pass by value 2nd example
void  do_some_thing(string &s) // by putting & it will be make changes on actual one 
{
  s[0] = 'O';
  cout<<s<<endl;

}
int main()
{
      //pass by value
      string s = "UMAR";
      do_some_thing(s); //as here s copy created and pass to the above function

      cout<<s; //but here the orignal value is printed 
      
      return 0;
}