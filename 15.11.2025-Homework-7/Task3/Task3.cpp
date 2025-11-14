#include<stdio.h>
#include<stdbool.h>

bool election(bool x, bool y, bool z);
int main(int argc, char** argv)
{
	bool x = 0;
	bool y = 0;
	bool z = 0;
	scanf("%d %d %d", &x, &y, &z);
	printf("%d", election(x, y, z));
	return 0;
}
bool election(bool x, bool y, bool z)
{
	int count_true = 0;
	count_true = x + y + z;
	if (count_true >= 2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}