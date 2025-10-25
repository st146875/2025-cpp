#include<cstdio>
#include<cmath>

int main(int argc, char** argv)
{
	int n = 0; // Количество элементов в массиве
	scanf_s("%d", &n);
	int arr[1001] = { 0 }; // Создаем массив и на время заполняем его нулями

	for (int i = 1; i <= n; i++) // Заполняем массив
	{
		scanf_s("%d", &arr[i]);
	}
	int x = 0; // Заданный элемент по условию задачи
	scanf_s(" %d", &x);
	int diff = 0; // Разница между элементом массива и числом x
	diff = arr[1];
	int best = 0; // Лучшее значение
	best = arr[1];
	int min = 0; // Минимальная разница между элементом массива и числом x
	min = abs(arr[1] - x);
	for (int i = 2; i <= n; i++)
	{
		diff = abs(arr[i] - x); // Разница между элементом массива и числом x
		if (diff < min)
		{
			min = diff;
			best = arr[i];
		}
		else if (diff == min)
		{
			if (arr[i] < best) 
			{
				best = arr[i];
			}
		}
	}
	printf("%d", best);
	return 0;
}