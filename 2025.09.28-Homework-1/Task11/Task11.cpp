#include<cstdio>

int main(int argc, char** argv) 
{
	int a = 0;
	scanf_s("%d", &a);
	int k = 0;
	k = (a + 1) / 2;
	int res = 0;
	res = k * k;
	printf("%d", res );
	return 0;
}