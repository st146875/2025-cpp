#include<cstdio>
#include<cmath>

int main(int argc, char** argv) 
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf_s("%d %d %d", &a, &b, &c);

    if (a == 0 && b == 0 && c == 0) 
    {
        printf("-1\n");
        return 0;
    }
    if (a == 0) 
    {
        if (b == 0) 
        {
            if (c != 0) 
            {
                printf("0\n");
            }
            else 
            {
                printf("-1\n");
            }
        }
        else 
        {
            double x = -(double)c / b;
            printf("1\n");
            printf("%.6f\n", x);
        }
        return 0;
    }
    long long D = (long long)b * b - 4LL * a * c;
    if (D < 0) 
    {
        printf("0\n");
    }
    else if (D == 0)
    {
        double x = -(double)b / (2 * a);
        printf("1\n");
        printf("%.6f\n", x);
    }
    else 
    {
        double sqrtD = sqrt((double)D);
        double x1 = (-(double)b + sqrtD) / (2 * a);
        double x2 = (-(double)b - sqrtD) / (2 * a);
        printf("2\n");
        printf("%.6f\n", x1);
        printf("%.6f\n", x2);
    }

    return 0;
}