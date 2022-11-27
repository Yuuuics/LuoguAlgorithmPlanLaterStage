#include <bits/stdc++.h>

using namespace std;

string s;

int main() {
    while (cin >> s) {
        register int a_length = 0;
        register string a = s;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') {
                a_length++;
                a.erase(i);
            }
        }
        if (a_length == s.size()) cout << s;
        else cout << a << " ";
    }
    return 0;
}
