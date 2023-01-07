#include <bits/stdc++.h>

using namespace std;
const int ARRN = 1e6 + 50;
const int MOD = 100003;

int N, M, x, y;
int dep[ARRN], cnt[ARRN];
bool vis[ARRN];
vector<int> G[ARRN];

void work() {
    queue<int> Q;
    dep[1] = 0;
    vis[1] = 1;
    Q.push(1);
    cnt[1] = 1;
    while (!Q.empty()) {
        int x = Q.front();
        Q.pop();
        for (int i = 0; i < G[x].size(); i++) {
            int t = G[x][i];
            if (!vis[t]) {
                vis[t] = 1;
                dep[t] = dep[x] + 1;
                Q.push(t);
            }
            if (dep[t] == dep[x] + 1) {
                cnt[t] = (cnt[t] + cnt[x]) % MOD;
            }
        }
    }
}

int main() {
    scanf("%d %d", &N, &M);
    for (int i = 1; i <= M; i++) {
        scanf("%d %d", &x, &y);
        G[x].push_back(y);
        G[y].push_back(x);
    }

    work();

    for (int i = 1; i <= N; i++) {
        printf("%d\n", cnt[i]);
    }
    return 0;
}