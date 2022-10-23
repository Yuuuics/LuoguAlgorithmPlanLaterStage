#include <bits/stdc++.h>

using namespace std;
const int N = 1000005;

int n, m;
int a[N], b[N];
map<int, bool> fmap;

int main() {
    ios::sync_with_stdio(false);

    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) {
        cin >> b[i];
        fmap[b[i]] = true;
    }
    for (int i = 1; i <= n; i++)
        if (fmap[a[i]])
            cout << a[i] << " ";
    return 0;
}
