#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv)
{
	int n = 0;
	scanf("%d", &n);
	int* arr = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int found = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] * arr[i + 1] > 0)
		{
			found = 1;
			break;
		}
	}
	if (found)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	free(arr);
	return 0;
}