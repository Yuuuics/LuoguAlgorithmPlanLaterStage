#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll N = 3000005;

ll n, val, ans;
ll v[N];
vector < ll > G[N];

void dfs(ll u, ll fa, long long sum) {
    if (sum >= val) ans++;
    for (ll i = 0; i < G[u].size(); i++) {
        ll t = G[u][i];
        if (t != fa) dfs(t, u, sum + v[t]);
    }
}

int main() {
    scanf("%lld %lld", &n, &val);
    for (ll i = 1; i <= n; i++)
        scanf("%lld", &v[i]);

    for (ll i = 1; i < n; i++) {
        ll a, b;
        scanf("%lld %lld", &a, &b);
        G[a].push_back(b);
        G[b].push_back(a);
    }
    dfs(1, 0, v[1]);
    printf("%lld\n", ans);
    return 0;
}
