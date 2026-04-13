#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    if (!(cin >> T)) return 0;
    
    while (T--) {
        int M, N, Q;
        cin >> M >> N >> Q;
        
        vector<string> v(M);
        for (int i = 0; i < M; i++) {
            cin >> v[i];
        }

        cout << M << " " << N << " " << Q << "\n";

        for (int z = 0; z < Q; z++) {
            int m, n;
            cin >> m >> n;
            char target = v[m][n];
            int r = 0;

            while (true) {
                int next_r = r + 1;
                bool ok = true;

                if (m - next_r < 0 || m + next_r >= M || n - next_r < 0 || n + next_r >= N) {
                    ok = false;
                } 
                else {
                  for (int i = m - next_r; i <= m + next_r; i++) {
                        for (int j = n - next_r; j <= n + next_r; j++) {
                            if (v[i][j] != target) {
                                ok = false;
                                break;
                            }
                        }
                        if (!ok) break;
                    }
                }

                if (ok) {
                    r = next_r;
                } else {
                    break;
                }
            }
            cout << r * 2 + 1 << "\n";
        }
    }
    return 0;
}

/*

7 10 4
3
1
5
1

*/