#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int n;
  cin >> n;
  cin.ignore();
  cin.ignore();
  while(n--){
    map<string,int> times;
    string s;
    double cnt=0.0;
    while(getline(cin,s) && !s.empty()){
    times[s]++;
    cnt++;
    }
    for(auto const& p : times) {
      double percentage = (p.second / cnt) * 100.0;
      cout << p.first << " " << fixed << setprecision(4) << percentage << "\n";
    }
    if(n>0){cout << "\n";}
  }
}