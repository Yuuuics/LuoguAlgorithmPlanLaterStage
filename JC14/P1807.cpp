#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 50;

int n, m, a, b, v;
int d[N], f[N][N];

queue < int > q;

void work() {
    memset(d, -1, sizeof(d));
    d[1] = 0;
    q.push(1);
    while (!q.empty()) {
        int t = q.front();
        q.pop();
        for (int i = 1; i <= n; i++) {
            if (f[t][i] && d[i] < d[t] + f[t][i]) {
                d[i] = d[t] + f[t][i];
                q.push(i);
            }
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= m; i++) {
        scanf("%d %d %d", &a, &b, &v);
        f[a][b] = max(f[a][b], v);
    }
    work();
    printf("%d\n", d[n]);
    return 0;
}
