#include<bits/stdc++.h>
using namespace std;

int val(char c) {
    if (isdigit(c)) return c - '0';
    if (isupper(c)) return c - 'A' + 10;
    if (islower(c)) return c - 'a' + 36;
    return -1;
}

int main(){
  string X;
  while(cin>>X){
    int max=0,sum=0;
    for(int i=0;i<X.length();i++){
      sum+=val(X[i]);
      if(max<val(X[i])){max=val(X[i]);}
    }
    max+=1;
    int check=0;
    if(max<2){max=2;}
    for(int i=max;i<63;i++){
      if(sum%(i-1)==0){cout<<i<<endl;check++;break;}
    }
    if (check==0){cout <<"such number is impossible!"<<endl;}
  }
}


//4
//6
//11