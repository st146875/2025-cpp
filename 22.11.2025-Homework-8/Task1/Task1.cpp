#include<stdio.h>
#include<string.h>

int IsDigit(unsigned char c);
int main(int argc, char** argv)
{
	unsigned char c;
	scanf("%c", &c);

	if (IsDigit(c)) 
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}
int IsDigit(unsigned char c)
{
	char digits[] = "0123456789";
	return strchr(digits, c) != NULL;
}