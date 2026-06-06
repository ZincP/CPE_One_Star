#include <bits/stdc++.h>

using namespace std;

int main() {

    long long x;
    while (cin >> x) {
        string enter, line;
        getline(cin, enter);
        getline(cin, line);

        stringstream ss(line);
        long long a;
        vector<long long> v;
        while (ss >> a) {
            v.push_back(a);
        }

        long long n = v.size() - 1;
        long long ans = 0;
        long long current_power = 1;

        for (long long i = n - 1; i >= 0; i--) {
            ans += v[i] * (n - i) * current_power;
            current_power *= x; 
        }

        cout << ans << "\n";
    }
  }