#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() 
{
  ll n;
  int tmp;
  while(1){
    int top=1,north=2,west=3,east=4,south=5,bottom=6;
    cin >> n;
    if(n==0){goto ya;}
    for(ll i=0;i<n;i++){
      string s;
      cin >> s;
      if(s[0]=='e'){
        tmp = top;
        top = west;
        west = bottom;
        bottom = east;
        east = tmp;
      }else if(s[0]=='s'){
        tmp = top;
        top = north;
        north = bottom;
        bottom = south;
        south = tmp;
      }else if(s[0]=='w'){
        tmp = top;
        top = east;
        east = bottom;
        bottom = west;
        west = tmp;
      }else if(s[0]=='n'){
        tmp = top;
        top = south;
        south = bottom;
        bottom = north;
        north = tmp;
      }
      
    }cout << top << "\n";
  }
  ya:
  return 0;
}

/*
　　２　　　　　     北
３　１　４　６  　西 頂 東 底
　　５　　　　　     南
　　６　　　　　     底
*/

// 5 1