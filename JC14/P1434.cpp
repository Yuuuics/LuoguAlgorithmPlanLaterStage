#include <bits/stdc++.h>

using namespace std;
const int INF = -1e9;
const int ARRN = 250;
const int DELTAN = 4;

int n, m, ans = INF;
int a[ARRN][ARRN], f[ARRN][ARRN];
int dx[DELTAN] = {0, 0, 1, -1}, dy[DELTAN] = {1, -1, 0, 0};
bool vis[ARRN][ARRN];

int dfs(int x, int y) {
    if (f[x][y]) return f[x][y];
    f[x][y] = 1;
    for (int i = 0; i < 4; i++) {
        int fx = dx[i] + x;
        int fy = dy[i] + y;
        if (fx > 0 && fy > 0 && fx <= n && fy <= m && a[x][y] > a[fx][fy]) {
            dfs(fx, fy);
            f[x][y] = max(f[x][y], f[fx][fy] + 1);
        }
    }
    return f[x][y];
}

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%d", &a[i][j]);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            ans = max(ans, dfs(i, j));
    printf("%d\n", ans);
    return 0;
}
