#include<cstdio>

int main(int argc, char** argv)
{
	int n = 0; // Конец массива натуральных чисел
	int a = 0; // Первый элемент первого отрезка элементов
	int b = 0; // Второй элемент первого отрезка элементов
	int c = 0; // Первый элемент второго отрезка элементов
	int d = 0; // Второй элемент второй отрезка элементов
	scanf_s("%d %d %d %d %d", &n, &a, &b, &c, &d);

	int arr[1001] = { 0 }; // Создаем массив и на время заполняем его нулями

	    for (int i = 1; i <= n; i++) // Заполняем массив
	    {
		    arr[i] = i;
	    }

		for (int i = a, j = b; i < j; i++, j--)
		{
			int temp = 0;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		for (int i = c, j = d; i < j; i++, j--) 
		{
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		for (int i = 1; i <= n; i++)
		{
			printf("%d ", arr[i]);
		}

	return 0;
}