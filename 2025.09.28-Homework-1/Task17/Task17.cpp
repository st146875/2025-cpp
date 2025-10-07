#include<cstdio>

int main(int argc, char** argv) 
{
    int n = 0;
    scanf_s("%d", &n);
    int hundreds = 0;
    hundreds = n / 100;
    int tens = 0;
    tens = (n / 10) % 10;
    int units = 0;
    units = n % 10;
    printf("%d\n", hundreds + tens + units);
    return 0;
}