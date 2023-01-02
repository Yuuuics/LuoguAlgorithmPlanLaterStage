#include <bits/stdc++.h>

using namespace std;
const int MAXN = 1e6 + 50;

int n, m;
bool u[MAXN];
vector < int > p[MAXN];
queue < int > q;

inline void dfs (int x) {
    cout << x << ' ';
    for (int i = 0, sz = p[x].size(); i < sz; i++) {
        if (!u[p[x][i]]) {
            u[p[x][i]] = true;
            dfs(p[x][i]);
        }
    }
}

inline void bfs() {
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        cout << x << ' ';
        for (int i = 0, sz = p[x].size(); i < sz; i++) {
            if (!u[p[x][i]]) {
                u[p[x][i]] = true;
                q.push(p[x][i]);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        p[x].push_back(y);  // 邻接表记录文献 x 有参考文献 y
    }

    for (int i = 1; i <= n; i++)
        sort(p[i].begin(), p[i].end());

    u[1] = true;
    dfs(1);

    memset(u, 0, sizeof(u));
    cout << endl;
    
    u[1] = true;
    q.push(1);
    bfs();

    return 0;
}
