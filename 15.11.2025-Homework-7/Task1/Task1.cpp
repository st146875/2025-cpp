#include<stdio.h>

int min(int a, int b, int c, int d);
int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d", min(a, b, c, d));
	return 0;
}
int min(int a, int b, int c, int d)
{
	int min = 0;
	min = a;
	if (b < min)
	{
		min = b;
	}
	if (c < min)
	{
		min = c;
	}
	if (d < min)
	{
		min = d;
	}

	return min;
}