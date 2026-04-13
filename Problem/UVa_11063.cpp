#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() 
{
  map<ll,ll> m;
  ll n;
  ll k=1;
  
  while(cin >> n){
    ll check=0;
    vector<ll>ve;
    set<ll>se;
    cout << "Case #" << k << ": ";
    for(ll i=0;i<n;i++){
      ll k;
      cin >> k;
      ve.push_back(k);
      if(i>0){
        if(ve.at(i)<=ve.at(i-1)){
          check++;
        }
      }
    }
    
    if(ve.at(0)<1 || check>0){
      check++;
    }else{
      for(ll i=0;i<n;i++){
        for(ll j=i;j<n;j++){
          if(se.count(ve.at(i)+ve.at(j))){
            check++;
            goto end_loop;
          }else{
            se.insert(ve.at(i)+ve.at(j));
          }
        }
      }
    }
    end_loop:
    if(check==0){
      cout << "It is a B2-Sequence." << "\n";
    }else{
      cout << "It is not a B2-Sequence." << "\n";
    }
  k++;
  cout << "\n";
  }
  return 0;
}

// Case #1: It is a B2-Sequence.

// Case #2: It is not a B2-Sequence.

// Case #3: It is not a B2-Sequence.