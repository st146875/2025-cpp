#include<cstdio>

int main(int argc, char** argv)
{
    int n = 0; // Количество элементов в массиве
    scanf_s("%d", &n);
    int arr[1000] = { 0 }; // Создаем массив и на время заполняем его нулями
    int count = 0; // Счетчик нашего искомого элемента

    for (int i = 0; i < n; i++) // Заполняем массив
    {
        scanf_s("%d", &arr[i]);
    }

    int x = 0; // Искомый элемент
    scanf_s(" %d", &x);

    for (int i = 0; i < n; i++)
    {

        if (arr[i] == x)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}