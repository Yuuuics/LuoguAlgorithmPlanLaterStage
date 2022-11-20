#include <bits/stdc++.h>

using namespace std;
int t, n, x;
unordered_map< int, bool > ump;

inline int read() {
    register int x = 0, f = 1;
    register char ch = getchar();
    while (ch < '0' || ch > '9') {
        if (ch == '-') f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9') {
        x = (x << 1) + (x << 3) + (ch ^ 48);
        ch = getchar();
    }
    return x * f;
}

inline void solve() {
    ump.clear();
    n = read();
    for (int i = 1; i <= n; i++) {
        x = read();
        if (!ump[x]) {
            printf("%d ", x);
            ump[x] = 1;
        }
    }
    printf("\n");
}

int main() {
    t = read();
    while (t--)
        solve();
    return 0;
}
