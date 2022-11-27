#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 1e7;

ll n, tot;
double ans;
ll a[N];

int main() {
    scanf("%lld", &n);
    for (ll i = 1; i <= n; i++) {
        scanf("%lld", &a[i]);
        tot += a[i];
    }

    if (tot < 300) {
        printf("1\n");
        return 0;
    } else {
        for (ll i = 1; i <= n; i++) {
            while (a[i] > 0) a[i] -= 100, ans++;
        }
        ans = ceil(ans / 3);
    }
    cout << ans << endl;
    return 0;
}
