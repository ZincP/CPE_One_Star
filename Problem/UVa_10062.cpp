#include <bits/stdc++.h>
using namespace std;

int main() 
{
  string s;
  bool first = true;

  while(getline(cin, s)){
    if (!first) {
      cout << "\n";
    }
    first = false;

    map<int, int> m;
    for(int i = 0; i < s.length(); i++){
      int ascii = s[i];
      if(m.count(ascii)){
        m.at(ascii)++;
      } else {
        m.insert({ascii, 1});
      }
    }

    for (int freq = 1; freq <= 1000; freq++){
      for (int ascii = 127; ascii > 31; ascii--){
        if (ascii == 13 || ascii == 10){ continue; }
        if (m[ascii] == freq){
          cout << ascii << ' ' << freq << '\n';
        }
      }
    }
  }
}