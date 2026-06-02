#include <bits/stdc++.h>
using namespace std;

int mon[13] = {-1, -4, 0, 0, -3, -5, -1, -3, -6, -2, -4, 0, -2};
string w[] = {"Monday", "Tuesday", "Wednesday",
    "Thursday", "Friday", "Saturday", "Sunday"};
 
int main() {
    int T, m, d;
    cin >> T;
    while (T--) {
        cin >> m >> d;
        int delta = (d - mon[m]) % 7;
        if (delta >= 0){
            cout << w[delta] << "\n";
        } else {
            cout << w[7 + delta] << "\n";
        }
    }
}