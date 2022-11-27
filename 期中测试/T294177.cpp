#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 50;

int n;
struct node {
    int si, di;
} a[N];

bool cmp(const struct node &a, const struct node &b) {
    return a.si < b.si;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i].si >> a[i].di;
    sort(a + 1, a + n + 1, cmp);
    cout << a[n].si << endl;
    return 0;
}
