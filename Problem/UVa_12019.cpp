#include <stdio.h>

int main() {
    int t, m, d;
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &m, &d);
        
        int total_days = d;
        for (int i = 1; i < m; i++) {
            total_days += days_in_month[i];
        }

        int result = (total_days + 4) % 7; 
        
        printf("%s\n", days[result]);
    }
    return 0;
}