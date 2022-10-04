#include <cstdio>

int n, k;
int a[50005];

void dfs(int pos) {
    if (pos - 1 == n) {     // 搜完了
        for (int i = 1; i <= n; i++)
            printf("%d ", a[i]);
        puts("");
        return;
    }

    for (int i = 1; i <= k; i++) {
        a[pos] = i;     // 把第 pos 位填充上去
        dfs(pos + 1);   // 递归调用，枚举下一位
    }
}

int main() {
    scanf("%d %d", &n, &k);
    dfs(1);     // 搜索起始点，从 pos = 1 开始枚举
    return 0;
}
