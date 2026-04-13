#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() 
{
  string s;
  int cnt=0;
  while(getline(cin,s)){
    map<int,int> m;
    map<int,int> mm;
    for(int i=0;i<s.length();i++){
      int ascii = s[i];
      if(m.count(ascii)){
        m.at(ascii)++;
      }else{
        m.insert({ascii,1});
        cnt++;
      }
    }
    for (int freq = 1; freq <= 1000; freq++){
      for (int ascii = 127; ascii > 31; ascii--){
        if (ascii==13 || ascii==10){continue;}
        if (m[ascii] == freq){
          cout << ascii << ' ' << freq << '\n';
        }
      }
    }
    cout << "\n";
  }
  return 0;
}

/*

67 1
66 2
65 3

49 1
50 2
51 3

*/