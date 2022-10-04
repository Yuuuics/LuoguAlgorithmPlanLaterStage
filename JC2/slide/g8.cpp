#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[15];

void dfs(int pos) {
    if(pos - 1 == n) { // 枚举完所有人
        for(int i = 1; i <= n; i++){ // 输出方案
            // 如果是 0 输出 'N'
            // 否则输出 'Y'
            if (a[i]) printf("Y ");
            else printf("N ");
        }
        cout << endl;
        return;
    }

    for(int i = 0; i <= 1; i++) {
        a[pos] = i;    // 将 pos 位填充成 i
        dfs(pos + 1);    // 递归填写后续位置
    }
}

int main() {
    cin >> n;

    dfs(1); // 最先枚举第几个人？

    return 0;
}
