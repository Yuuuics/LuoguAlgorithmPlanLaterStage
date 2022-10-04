#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[15], use[15];

void dfs(int pos) {
    if(pos == k + 1) {
        for(int i = 1; i <= k; i++)
            cout << a[i] << ' ';
        cout << endl;

        return;
    }

    for(int i = 1; i <= n; i++)
        if(!use[i]) { // 如果第 i 个元素没有被使用
            use[i] = true; // 将其标记为被使用
            a[pos] = i; // 更新 a[pos]
            dfs(pos + 1); // 枚举下一个
            use[i] = false; // 将其标记为未被使用
        }
}

int main() {
    cin >> n >> k;

    dfs(1);

    return 0;
}