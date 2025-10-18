#include<cstdio>

int main(int argc, char** argv)
{
    float x = 0;
    float y = 0;

    scanf_s("%f %f", &x, &y);

    int day = 1; // Текущий день
    float probeg = x; // Текущий пробег

    while (probeg < y)
    {
        day++;
        probeg = probeg * 1.15;
    }
    printf("%d", day);
    return 0;
}