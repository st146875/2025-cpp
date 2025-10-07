#include<cstdio>

int main(int argc, char** argv)
{
    long long n = 0;
    long long k = 0;
    scanf_s("%lld %lld", &n, &k);
    long long count_per_student = 0;
    count_per_student = k / n;
    long long in_basket = 0;
    in_basket = k % n;
    long long unhappy = 0;
    unhappy = (n - (k % n)) * (k % n != 0);
    printf("%lld %lld %lld\n", count_per_student, in_basket, unhappy);
    return 0;
}