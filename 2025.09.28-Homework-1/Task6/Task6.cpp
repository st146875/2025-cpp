#include<cstdio>

int main(int argc, char** argv) 
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	int n = 0;
	n = a + b - 1;
	int g = n - a;
	int l = n - b;
	printf("%d %d", g, l);
	return 0;
}