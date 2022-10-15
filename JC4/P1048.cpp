#include <bits/stdc++.h>

using namespace std;
int M, T, ans;      // 个数，总时间，答案
int t[105], v[105]; //时间和价值

void dfs(int k, int tsum, int vsum)
{
    //枚举到第k棵，到目前的时间和，价值和
    if (k == M + 1)
    {
        if (vsum > ans) // 如果价值和比答案更大就更新答案
            ans = vsum;
        return;
    }
    //选择第k株，对应的时间和，价值和都要加上第k株的信息
    if (tsum + t[k] <= T) // 如果加入第k株的时间没有超时
        dfs(k + 1, tsum + t[k], vsum + v[k]);
    // 不选择第k株时间和，价值和保持不变
    dfs(k + 1, tsum, vsum);
}
int main()
{
    cin >> T >> M;
    for (int i = 1; i <= M; i++)
        cin >> t[i] >> v[i];
    dfs(1, 0, 0); // 从第1个开始枚举，时间和、价值和都是0
    cout << ans;
}
