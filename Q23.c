#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int green, purple;
        scanf("%d %d", &green, &purple);

        int n;
        scanf("%d", &n);

        int p1 = 0, p2 = 0;

        for (int i = 0; i < n; i++) {
            int a, b;
            scanf("%d %d", &a, &b);

            if (a == 1) p1++;
            if (b == 1) p2++;
        }

        long long cost1 = (long long)p1 * green + (long long)p2 * purple;
        long long cost2 = (long long)p1 * purple + (long long)p2 * green;

        long long ans = cost1 < cost2 ? cost1 : cost2;
        printf("%lld\n", ans);
    }

    return 0;
}
