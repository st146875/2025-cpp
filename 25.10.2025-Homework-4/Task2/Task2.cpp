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

	int l = 0; // Первый номер массива для создания отрезка
	int r = 0; // Второй номер массива для создания отрезка
	scanf_s("%d %d", &l, &r);

	int max_val = 0; // Максимальное значение
	max_val = arr[l]; // Максимальное значение изначально для первого элемента
	int max_ind = 0; // Индекс максимального значения
	max_ind = l; // Тоже изначально для первого значения

	for (int i = l; i <= r; i++)
	{
		if (arr[i] > max_val)
		{
			max_val = arr[i];
			max_ind = i;
		}
	}
	printf("%d %d", max_val, max_ind);
	return 0;
}