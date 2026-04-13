#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    cout << "Case " << i+1 << ":" <<"\n";
    map<int,long> m;
    for(int j=0;j<36;j++){
      int in;
      cin >> in;
      m.insert({j,in});
    }
    long long nn;
    cin >> nn;
    for(long long j=0;j<nn;j++){
      long long x;
      long long amount[40]={0};
      cin >> x;
      cout << "Cheapest base(s) for number " << x << ":";
      long long min;
      for(int k=2;k<37;k++){
        long long tx;
        tx=x;
        while(tx>=1){
          amount[k]+=m.at(tx%k);
          tx=tx/k;
        }
        if(k==2){min=amount[k];}
        if(amount[k]<min){
          min=amount[k];
        }
      }
      for(int k=2;k<37;k++){
        if(min==amount[k]){
          cout << " " << k;
        }
      }
      cout << "\n";
    }
    if(i<n-1){cout << "\n";}
  }
  return 0;
}