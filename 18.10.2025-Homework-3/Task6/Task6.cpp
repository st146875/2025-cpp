#include<cstdio>

int main(int argc, char** argv)
{
	int n = 0;

	scanf_s("%d", &n);

	int now = 0; // Текущая найденная длина последовательности положительных чисел
	int max = 0; // Максимальная найденная длина последовательности

	for (int i = 0; i < n; i++)
	{
		int temp;
		scanf_s("%d", &temp); // Введенная температура через пробел(temp)

		if (temp > 0)
		{
			now++;
		}
		else if (temp <= 0)
		{
			now = 0;
		}
		if (now > max)
		{
			max = now;
		}
	}
	printf("%d", max);

	return 0;
}