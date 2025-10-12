#include<cstdio>
#include<cmath>

int main(int argc, char** argv)
{
	int x1 = 0;
	int x2 = 0;
	int y1 = 0;
	int y2 = 0;

	scanf_s("%d %d", &x1, &y1);
	scanf_s("%d %d", &x2, &y2);

	if ((x1 > 0 && x1 < 9) && (x2 > 0 && x2 < 9) && (y1 > 0 && y1 < 9) && (y2 > 0 && y2 < 9))
	{
		if (x1 == x2 || y1 == y2)
		{
			printf("YES");
		}
		else if (abs(x1 - x2) == abs(y1 - y2))
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
	}
	else
	{
		printf("NO");
	}
	return 0;
}