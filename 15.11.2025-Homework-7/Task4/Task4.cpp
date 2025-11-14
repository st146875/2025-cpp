#include<stdio.h>

int prime(int n);
int main(int argc, char** argv)
{
	int n = 0;
	scanf("%d", &n);
	int result = 0;
	result = prime(n);
	if (result == 1)
	{
		printf("prime");
	}
	else if (result == 0)
	{
		printf("composite");
	}
	return 0;
}
int prime(int n)
{
	if (n <= 1)
	{
		return 0;
	}
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}