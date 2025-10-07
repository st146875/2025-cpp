#include<cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    scanf_s("%d %d", &a, &b);
    int d = 0;
    d = ((a % b) == 0) + ((b % a) == 0);
    int output = 0;
    output = 1 * (d != 0) + 666 * (d == 0);
    printf("%d\n", output);
    return 0;
}