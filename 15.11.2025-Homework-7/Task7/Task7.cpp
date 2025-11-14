#include<stdio.h>

int phi(int n);
int main(int argc, char** argv)
{
	int n = 0;
	scanf("%d", &n);
	int result = 0;
	result = phi(n);
	printf("%d", result);
	return 0;
}
int phi(int n)
{
	if (n == 1 || n == 0)
	{
		return 1;
	}
	return phi(n - 1) + phi(n - 2);
}