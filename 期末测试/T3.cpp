#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll N = 1e6 + 50;

ll n, m, tot, ans;
ll a[N];

int main() {
    scanf("%lld %lld", &n, &m);
    for (ll i = 1; i <= n; i++)
        scanf("%lld", &a[i]);

    for (ll i = 1; i <= N; i++) {
        tot = i * n, ans = i;
        if (tot >= m) break;
    }
    printf("%lld\n", ans);
    return 0;
}
