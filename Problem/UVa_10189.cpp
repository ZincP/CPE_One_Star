#include <bits/stdc++.h>

using namespace std;

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() {
    int n, m;
    int fieldNum = 1;
    
    while (cin >> n >> m && (n != 0 || m != 0)) {
        if (fieldNum > 1) cout << endl;
        
        vector<string> grid(n);
        for (int i = 0; i < n; i++) {
            cin >> grid[i];
        }
        
        cout << "Field #" << fieldNum << ":" << endl;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '*') {
                    cout << '*';
                } else {
                    int count = 0;
                    for (int d = 0; d < 8; d++) {
                        int nx = i + dx[d];
                        int ny = j + dy[d];
                        if (nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] == '*') {
                            count++;
                        }
                    }
                    cout << count;
                }
            }
            cout << endl;
        }
        fieldNum++;
    }
    return 0;
}