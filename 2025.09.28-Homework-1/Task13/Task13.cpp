#include<cstdio>

int main(int argc, char** argv) 
{
    int k = 0;
    int n = 0;
    scanf_s("%d %d", &k, &n);
    int page = 0;
    page = (n - 1) / k + 1;
    int line_on_page = 0;
    line_on_page = (n - 1) % k + 1;
    printf("%d %d\n", page, line_on_page);
    return 0;
}