#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll t, n;

int main() {
    ios::sync_with_stdio(false);

    cin >> t;
    for (ll i = 1; i <= t; i++) {
        cin >> n;
        ll tot = 0;
        for (ll j = 1, tmp; j <= n; j++) {
            cin >> tmp;
            tot += tmp;
        }
        if (tot % 3 == 0) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
