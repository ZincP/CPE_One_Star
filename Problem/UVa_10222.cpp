#include<bits/stdc++.h>
using namespace std;

int main(){
    char kb[4][20]={
      "`1234567890-=",
      "qwertyuiop[]\\",
      "asdfghjkl;'",
      "zxcvbnm,./"
    };
    
    string l;
    while(getline(cin,l)){
    
    for(int i=0;i<l.length();i++){
      if(l[i]==' '){cout << " " ;continue;}
      l[i]=tolower(l[i]);
      int check=0;
      for(int j=0;j<4;j++){
        for(int k=0;k<20;k++){
          if(l[i]==kb[j][k]){
            cout << kb[j][k-2];
            check=1;
            break;
          }
          if(check==1){break;}
        }
      }
    }
    cout << "\n";
    }
}

/*
how are you
*/