#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      string n_str;
      cout<<"Enter number to count digits"<<endl;
      cin>>n;
      n_str = to_string(n);
      for(char ch : n_str)
      {
            int digit = ch - '0';
            cout << "Digit: " << digit << endl;
      }
      
}