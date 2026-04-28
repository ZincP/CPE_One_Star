#include <bits/stdc++.h>
using namespace std;

int main() 
{
  long long x;
  string enter,line;
  while(cin >> x){
    getline(cin,enter);
    getline(cin,line);
    stringstream ss(line);
    long long a;
    vector<long long> v;
    while(ss>>a){
      v.push_back(a);
    }
    long long l=v.size();
    long long am=0;
    for(long long i=0;i<l-1;i++){
      am+=v.at(l-i-2)*(i+1)*pow(x,i);
    }
    cout << am << endl;
  }
}

//1
//5