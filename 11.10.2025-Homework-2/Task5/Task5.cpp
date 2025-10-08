#include<cstdio>

int main(int argc, char** argv) 
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf_s("%d %d %d", &a, &b, &c);

    if (a == 0 && b == 0 && c == 0) 
    {
        printf("0\n");
        return 0;
    }

    bool first = true;

    if (a != 0)
    {
        if (first) 
        {
            if (a < 0)
                printf("-");
            printf("%d", a < 0 ? -a : a);
        }
        else 
        {
            if (a > 0)
                printf("+");
            else
                printf("-");
            printf("%d", a < 0 ? -a : a);
        }
        first = false;
    }
    if (b != 0)
    {
        if (first) 
        {
            if (b < 0)
                printf("-");
        }
        else {
            if (b > 0)
                printf("+");
            else
                printf("-");
        }
        if (b == 1 || b == -1)
        {
            if (first) 
            {
                printf("x");
            }
            else 
            {
                printf("x");
            }
        }
        else
        {
            printf("%d", b < 0 ? -b : b);
            printf("x");
        }
        first = false;
    }
    if (c != 0)
    {
        if (first)
        {
            if (c < 0)
                printf("-");
        }
        else
        {
            if (c > 0)
                printf("+");
            else
                printf("-");
        }
        if (c == 1 || c == -1) 
        {
            printf("y");
        }
        else 
        {
            printf("%d", c < 0 ? -c : c);
            printf("y");
        }
        first = false;
    }

    printf("\n");
    return 0;
}