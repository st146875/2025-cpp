#include<cstdio>

int main(int argc, char** argv) 
{
    long long a = 0;
    long long b = 0;
    scanf_s("%lld %lld", &a, &b);
    long long r = 0;
    r = a % b;
    r += (r < 0) * b;
    printf("%lld\n", r);
    return 0;
}