#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<int> vec(n);
        for (int i = 0; i < n; ++i) {
            cin >> vec[i];
        }

        sort(vec.begin(), vec.end());

        int mid1 = (n - 1) / 2;
        int mid2 = n / 2;

        int ans1 = vec[mid1];
        int ans2 = 0;
        int ans3 = 0;

        if (n % 2 != 0) {
            ans3 = 1;
            for (int i = 0; i < n; ++i) {
                if (vec[i] == ans1) {
                    ans2++;
                }
            }
        } else {
            ans3 = vec[mid2] - vec[mid1] + 1;
            for (int i = 0; i < n; ++i) {
                if (vec[i] >= vec[mid1] && vec[i] <= vec[mid2]) {
                    ans2++;
                }
            }
        }

        cout << ans1 << " " << ans2 << " " << ans3 << "\n";
    }

    return 0;
}