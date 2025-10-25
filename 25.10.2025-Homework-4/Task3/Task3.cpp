#include<cstdio>

int main(int argc, char** argv)
{
	int n = 0; // Количество элементов в массиве
	scanf_s("%d", &n);
	int arr[1001] = { 0 }; // Создаем массив и на время заполняем его нулями

	for (int i = 1; i <= n; i++) // Заполняем массив
	{
		scanf_s("%d", &arr[i]);
	}
	int max = 0; // Создаем переменную максимальной оценки
	max = arr[1];
	int min = 0; // Создаем переменную минимальной оценки
	min = arr[1];
	for (int i = 1; i <= n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (arr[i] == max)
		{
			arr[i] = min;
		}
	}
	for (int i = 1; i <= n; i++) 
	{
		printf("%d ", arr[i]);
	}
	return 0;
}