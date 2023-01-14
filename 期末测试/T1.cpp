#include <bits/stdc++.h>

using namespace std;
const int N = 5e6;

int n, p;
int a[N];
bool vis[N];

int main() {
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
        a[i] = i;
    for (int i = 2; i <= n; i++) {
        if (!vis[i]) {
            printf("%d ", a[i]);
            p = a[i], vis[i] = true;
            for (int j = p; j <= n; j++) {
                if (!vis[j] && j % p == 0) {
                    vis[j] = true;
                    printf("%d ", a[j]);
                }
            }
        }
    }
    return 0;
}
