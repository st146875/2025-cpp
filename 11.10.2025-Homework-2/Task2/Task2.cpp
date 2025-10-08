#include<cstdio>

int main(int argc, char** argv)
{
	char a[7];
	scanf_s("%6s", &a);
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;
	int num6 = 0;
	num1 = a[0] - '0';
	num2 = a[1] - '0';
	num3 = a[2] - '0';
	num4 = a[3] - '0';
	num5 = a[4] - '0';
	num6 = a[5] - '0';
	if ( (num1 + num2 + num3) == (num4 + num5 + num6) )
	{
		printf("YES");
	}
	else 
	{
		printf("NO");
	}
	return 0;
	
}