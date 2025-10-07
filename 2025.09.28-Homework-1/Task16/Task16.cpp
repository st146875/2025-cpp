#include<cstdio>

int main(int argc, char** argv) 
{
    int n = 0;
    scanf_s("%d", &n);
    int result = 0;
    result = (n / 10) % 10;
    printf("%d\n", result);
    return 0;
}