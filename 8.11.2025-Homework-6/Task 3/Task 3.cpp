#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv)
{
	int n = 0;
	scanf("%d", &n);
	int count = 0;
	int* arr = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			count++;
		}
	}
	printf("%d", count);
	free(arr);
	return 0;
}