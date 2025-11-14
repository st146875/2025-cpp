#include<stdio.h>

int binom(int n, int k);
int main(int argc, char** argv)
{
    int n = 0;
    int k = 0;
    scanf("%d %d", &n, &k);
    int result = 0;
    result = binom(n, k);
    printf("%d", result);
	return 0;
}
int binom(int n, int k)
{
    if (k == 0 || k == n) 
    {
        return 1;
    }
    return binom(n - 1, k - 1) + binom(n - 1, k);
}