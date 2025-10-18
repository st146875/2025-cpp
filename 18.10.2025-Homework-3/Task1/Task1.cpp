#include<cstdio>

int main(int argc, char** argv)
{
	int n = 0;
	scanf_s("%d", &n);
	int sum = 0;
	int a = 0;
	int b = 1;
	if (n == 0)
	{
		sum = a; // Нулевой член ряда равен 0
	}
	else if (n == 1)
	{
		sum = b; // Первый член ряда равен 1
	}
	else
	{
		int i = 2; // Иначе начинаем со второго члена

		while (i <= n)
		{
			sum = a + b;
			a = b;
			b = sum;
			i++;
		}
	}
	printf("%d", sum);
	return 0;
}