#include <bits/stdc++.h>

using namespace std;
const int N = 1050;

int x, y, k, n, m, ans;
int mk[N], a[N];
bool vis[N];
vector< int > b[N];

void dfs (int x) {
    vis[x] = 1;
    mk[x]++;
    for (int i = 0; i < b[x].size(); i++)
        if (!vis[b[x][i]])
            dfs(b[x][i]);
}

int main() {
    scanf("%d %d %d", &k, &n, &m);
    for (int i = 1; i <= k; i++)
        scanf("%d", &a[i]);
    for (int i = 1; i <= m; i++) {
        scanf("%d %d", &x, &y);
        b[x].push_back(y);
    }

    for (int i = 1; i <= k; i++) {
        for (int j = 1; j <= n; j++)
            vis[j] = 0;
        dfs(a[i]);
    }
    for (int i = 1; i <= n; i++)
        if (mk[i] == k)
            ans++;
    printf("%d\n", ans);
    return 0;
}