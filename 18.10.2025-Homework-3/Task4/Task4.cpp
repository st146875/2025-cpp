#include<cstdio>

int main(int argc, char** argv)
{
	int n = 0;
	int max = 0; // Максимальная серия
	int now = 0; // Текущая серия
	int n_a = -1; // Предыдущее число

	do
	{
		scanf_s("%d", &n);

		if (n == n_a)
		{
			now++;
		}
		else
		{
			now = 1; // Обновляем цикл
			n_a = n; // Обновляем предыдущее число
		}
		if (now > max)
		{
			max = now;
		}
	} 
	while (n != 0);
	printf("%d", max);
	return 0;
}