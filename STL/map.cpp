#include<bits/stdc++.h>

using namespace std;

void explain_map() {
    map<int, int> m; // Map with an integer key and an integer value
    map<int, pair<int, int>> m1; // Map with an integer key and a pair of integers as the value
    map<pair<int, int>, int> m2; // Map with a pair of integers as the key and an integer value

    // Insert values into the maps
    m[1] = 2; // Insert key-value pair (1, 2) into map m
    m1[1] = make_pair(2, 3); // Insert key 1 with value (2, 3) into map m1
    m2[make_pair(2, 4)] = 5; // Insert key (2, 4) with value 5 into map m2

    // Print the contents of map m
    for ( auto& it : m)
     {
        cout << it.first << "  " << it.second << endl;
    }

    // Print the contents of map m1
    for ( auto& it : m1) {
        cout << it.first << "  (" << it.second.first << ", " << it.second.second << ")" << endl;
    }

    // Print the contents of map m2
    for ( auto& it : m2) {
        cout << "(" << it.first.first << ", " << it.first.second << ")  " << it.second << endl;
    }
}

int main()
 {
      //next permutation
      string s = "542";
      sort(s.begin() , s.end()); //it will sort first in "245"
      do
      {
            cout<< s <<endl;
      } while (next_permutation(s.begin() ,  s.end() ));
      
   // explain_map();
    return 0;
}
