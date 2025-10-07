#include<cstdio>

int main(int argc, char** argv)
{
    long long n = 0;
    scanf_s("%lld", &n);
    long long ans = 0;
    ans = (n + 9) / 10;
    printf("%lld\n", ans);
    return 0;
}