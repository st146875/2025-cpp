#include<cstdio>

int main(int argc, char** argv)
{
	long long a = 0;
	long long b = 0;
	long long c = 0;
	long long d = 0;

	scanf_s("%lld %lld %lld %lld", &a, &b, &c, &d);

	for (int x = -100; x < 101; x++)
	{
		long long result = 0;

		result = a * x * x * x + b * x * x + c * x + d;

		if (result == 0)
		{
			printf("%d ", x);
		}
	}
	return 0;
}