#include <bits/stdc++.h>
using namespace std;

int n, l, r, ans; // ans 是合法的方案数量
int a[55], w[55];

void dfs(int pos) {
    int sum = 0; 
    for(int i = 1; i <= pos; i++){
        // 计算 sum
        // sum 是目前已经选择的食物的能量和
        if (a[i])
            sum += w[i];
    }

    /* 剪枝操作 */
    if(sum > r) return; // 能量和超过 r 就不再枚举

    if(pos == n + 1) {
        if(sum >= l && sum <= r) // 如果能量值的和在要求的范围内
            ans++;  // 合法方案数增加 1
        return;
    }
    for (int i = 0; i <= 1; i++) { // 枚举第 pos 个食物选或不选
        a[pos] = 1; // 记录 a[pos]
        dfs(pos + 1); // 递归枚举下一个
    }
}

int main() {
    cin >> n >> l >> r;
    for(int i = 1; i <= n; i++)
        cin >> w[i];

    dfs(1); // 从第一个开始枚举

    cout << ans << endl; // 输出合法方案;
    return 0;
}