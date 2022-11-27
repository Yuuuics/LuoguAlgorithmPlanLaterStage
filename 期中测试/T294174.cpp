#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll N = 1e6;

ll n, k;
ll a[N];

int main() {
    ios::sync_with_stdio(false);

    cin >> n >> k;
    for (ll i = 1; i <= n; i++) cin >> a[i];

    sort(a + 1, a + n + 1);

    cout << a[k] << endl;
    return 0;
}
