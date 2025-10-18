#include<cstdio>

int main(int argc, char** argv)
{
	int n = 0;

	int max = -1; // Максимум
	int max2 = -1; // Второй максимум

	do
	{
		scanf_s("%d", &n);
		if (n > max)
		{
			max2 = max;
			max = n;
		}
		else if ((max2 == -1 || n > max2) && n < max)
		{
			max2 = n;
		}

	} 
	while (n != 0);
	printf("%d", max2);
	return 0;
}