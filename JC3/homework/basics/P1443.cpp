#include <cstdio>
#include <cstring>
#include <queue>

const int dx[9] = {0, -1, -2, -2, -1, 1, 2, 2, 1};
const int dy[9] = {0, 2, 1, -1, -2, 2, 1, -1, -2};
std::queue<std::pair<int, int>> q;

int n, m, x, y;
int f[505][505];
bool vis[505][505];

void bfs();

int main() {
    memset(f, -1, sizeof(f));
    memset(vis, false, sizeof(vis));

    scanf("%d %d %d %d", &n, &m, &x, &y);

    bfs();

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            printf("%-5d", f[i][j]);
        printf("\n");
    }
    return 0;
}

void bfs() {
    f[x][y] = 0, vis[x][y] = true;
    q.push(std::make_pair(x, y));

    while (!q.empty()) {
        int fx = q.front().first;
        int fy = q.front().second;
        q.pop();

        for (int i = 1; i <= 8; i++) {
            int a = fx + dx[i];
            int b = fy + dy[i];

            if (a < 1 || a > n || b < 1 || b > m || vis[a][b]) continue;
            vis[a][b] = true;
            q.push(std::make_pair(a, b));
            f[a][b] = f[fx][fy] + 1;
        }
    }
}
