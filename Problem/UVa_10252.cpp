#include <bits/stdc++.h>
using namespace std;

int main() 
{
  string a,b;
  while(cin >> a >> b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    int aa=0,bb=0;
    
    while(aa<a.length() && bb<b.length()){
      if(a[aa]==b[bb]){
        cout << a[aa];
        aa++;
        bb++;
      }else if(a[aa]>b[bb]){
        bb++;
      }else if(a[aa]<b[bb]){
        aa++;
      }
    }
    cout << "\n";
  }
  return 0;
}

//e
//nw
//et