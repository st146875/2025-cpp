#include<cstdio>

int main(int argc, char** argv) 
{
	int n = 0;
	scanf_s("%d", &n);
	if (n == 1) 
	{
		printf("0\n");
	}
	else if(n %2 == 0)
	{
		printf("%d\n", n / 2);
	}
	else
	{
		printf("%d\n", n);
	}
}