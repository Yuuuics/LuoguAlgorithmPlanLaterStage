#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

string in_order, post_order;

void pre_order(string in, string post) {
    if (in.size() > 0) {
        char ch = post[post.size() - 1];
        cout << ch;   // 找到根输出
        int k = in.find(ch);
        pre_order(in.substr(0, k), post.substr(0, k));
        pre_order(in.substr(k + 1), post.substr(k, in.size() - k - 1)); // 递归寻找左右子树
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> in_order >> post_order;
    pre_order(in_order, post_order);
    puts("");
    return 0;
}
