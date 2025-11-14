#include<stdio.h>

double power(double a, int n);
int main(int argc, char** argv)
{
    double a = 0;
    int n = 0;
    scanf("%lf %d", &a, &n);
    double result = 0;
    result = power(a, n);
    printf("%lf", result);
	return 0;
}
double power(double a, int n) 
{
    if (n == 0)
    {
        return 1.0;
    }
    if (n < 0)
    {
        return 1.0 / power(a, -n);
    }
    if (n % 2 == 0) 
    {
        double half = 0;
        half = power(a, n / 2);
        return half * half;
    }
    else 
    {
        return a * power(a, n - 1);
    }
}