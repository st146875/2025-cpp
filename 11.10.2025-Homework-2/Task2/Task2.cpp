#include<cstdio>

int main(int argc, char** argv)
{
    int number = 0;
    scanf_s("%6d", &number);
    int a = 0;
    a = number / 100000;
    int b = 0;
    b = number / 10000 % 10;
    int c = 0;
    c = number / 1000 % 10;
    int d = 0;
    d = number / 100 % 10;
    int e = 0;
    e = number / 10 % 10;
    int m = 0;
    m = number % 10;
    int k = 0;
    k = a + b + c;
    int k1 = 0;
    k1 = d + e + m;
    if (k == k1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}