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
	for (int i = n; i >= 1; i--)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}