#include<stdio.h>

double power(double num, int exponent);
int main(int argc, char** argv)
{
    double num = 0;
    int exponent = 0;
    scanf("%lf %d", &num, &exponent);
    double result = 0;
    result = power(num, exponent);
    printf("%lf", result);
	return 0;
}
double power(double num, int exponent) 
{
    if (exponent == 0)
    {
        return 1.0;
    }
    if (exponent < 0)
    {
        return 1.0 / power(num, -exponent);
    }
    return num * power(num, exponent - 1);
}