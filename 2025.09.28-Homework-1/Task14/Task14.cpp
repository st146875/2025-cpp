#include<cstdio>

int main(int argc, char** argv) 
{
    int n = 0;
    scanf_s("%d", &n);
    int prefix = 0;
    prefix = n / 10;
    int next = 0;
    next = prefix + 1;
    int product = 0;
    product = prefix * next;
    printf("%d", product);
    printf("25\n");
    return 0;
}