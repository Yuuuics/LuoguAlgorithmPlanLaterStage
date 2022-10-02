#include <cstdio>

int t, n, m;

int solve(int fn, int fm) {
    if (fn == 1 || fm == 1) return 1;
    if (fn < 0 || fm < 1) return 0;
    return solve(fn, fm - 1) + solve(fn - fm, fm);      // 要么一个盘子不放，将苹果减去一个；或者将苹果再分发下去，在每个盘子放一个苹果，即苹果减去盘子的数量
}

int main() {
    scanf("%d", &t);
    for (int time = 1; time <= t; time++) {
        scanf("%d %d", &n, &m);
        printf("%d\n", solve(n, m));
    }
    return 0;
}
