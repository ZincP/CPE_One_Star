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
    while(cin >> X){
        int max_val = 0, sum = 0;
        for(int i = 0; i < X.length(); i++){
            int v = val(X[i]);
            if (v == -1) continue;
            
            sum += v;
            if(max_val < v){
                max_val = v;
            }
        }
        
        max_val += 1;
        if(max_val < 2){
            max_val = 2;
        }
        
        int check = 0;
        for(int i = max_val; i <= 62; i++){
            if(sum % (i - 1) == 0){
                cout << i << endl;
                check++;
                break;
            }
        }
        if (check == 0){
            cout << "such number is impossible!" << endl;
        }
    }
    return 0;
}