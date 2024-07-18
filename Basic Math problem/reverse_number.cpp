#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n , digit , digit_1;
      string n_str;
      cout<<"Enter number ";
      cin>>n;
      n_str = to_string(n);

       for(char ch : n_str)
      {
             digit = ch - '0';
            cout << "Digit: " << digit << endl;
      }
      cout<<"Digit in reverse order"<<endl;

      for(int i = n_str.length()-1; i>=0; i--)
      {
            
            digit_1 = n_str[i] - '0';
            cout<<digit_1 <<endl;
      }
      


}