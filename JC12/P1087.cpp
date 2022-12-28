#include <iostream>

using namespace std;
const int N = 2000;

int n;
char s[N];

void maketree(int x, int y) {
    if (y > x) {
        maketree(x, (x + y) / 2);
        maketree((x + y + 1) / 2, y);
    }

    int B = 1, I = 1;
    for (int i = 0; i <= y - x; i++) {
        if (s[x + i] == '1') {
            B = 0;
        } else if (s[x + i] == '0') {
            I = 0;
        }
    }
    if (B) printf("B");
    else if (I) printf("I");
    else printf("F");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    scanf("%d %s", &n, s);
    maketree(0, (1 << n) - 1);
    puts("");

    return 0;
}
