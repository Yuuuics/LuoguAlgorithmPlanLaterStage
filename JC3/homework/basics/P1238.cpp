#include <iostream>
#include <string>

using namespace std;

int a[17][17], s[17][17], n, m, ax, ay, bx, by;
const string c[16] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15"};
const int d[4][2] = {{0, -1}, {-1, 0}, {0, 1}, {1, 0}};
bool flag;

void dfs(int ax, int ay, string ways)
{
    if (ax == bx && ay == by)
    {
        cout << ways << endl;
        flag = 1;
    }

    for (int i = 0; i < 4; i++)
    {
        int x = ax + d[i][0], y = ay + d[i][1];
        if (a[x][y] == 1 && s[x][y] == 0)
        {
            s[x][y] = s[ax][ay] + 1;
            dfs(x, y, ways + "->" + "(" + c[x] + "," + c[y] + ")");
            s[x][y] = 0;
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    cin >> ax >> ay >> bx >> by;
    s[ax][ay] = 1;
    dfs(ax, ay, "(" + c[ax] + "," + c[ay] + ")");
    if (!flag)
        cout << -1 << endl;
    return 0;
}