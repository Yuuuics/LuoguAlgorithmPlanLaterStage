#include <cstdio>
#include <bitset>

unsigned long long n;

int main() {
    scanf("%d", &n);
    std::bitset<32> def(n), rev(0);

    /* 将前16位与后16位交换位置 */
    for (auto i = 0; i < 16; i++)
        rev[16 + i] = def[i];
    for (auto i = 0; i < 16; i++)
        rev[i] = def[16 + i];
    
    printf("%llu\n", rev.to_ullong());
    return 0;
}
