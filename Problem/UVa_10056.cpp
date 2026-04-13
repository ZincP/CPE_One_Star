#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int k;
  cin >> k;
  for(int i=0;i<k;i++){
    int n;
    int ii;
    double p;
    cin >> n >> p >> ii;
    double num=pow(1-p,ii-1)/(1-pow(1-p,n))*p;
    cout << fixed << setprecision(4);
    cout << num << "\n";
  }
  return 0;
}

//a/(1-r)

//0.5455
//0.4545