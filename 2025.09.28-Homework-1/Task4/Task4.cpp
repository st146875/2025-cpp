#include<cstdio>

int main(int argc, char** argv) 
{
	int n = 0;
	int a = 0;
	int b = 0;
	scanf_s("%d %d %d", &n, &a, &b);
	printf("%d", n * a * b * 2);
	return 0;
}