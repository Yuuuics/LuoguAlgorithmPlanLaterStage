#include <bits/stdc++.h>

using namespace std;

int a[10000] = {0}, n, m, x = 1, y;

int main() {
    cin >> n >> m;
    y = n;

    for (int i = 1; i <= n; i++) {
        if (a[i] != 1) {
            if (x == m) {
                cout << i << " ";
                a[i] = 1;
                x = 0;
                y--;
            }
            x++;
        }
        if (i == n)
            i = 0;
        if (y == 0)
            break;
    }
    return 0;
}
