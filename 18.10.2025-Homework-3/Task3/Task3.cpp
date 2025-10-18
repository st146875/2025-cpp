#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int nod = 0;
	int nok = 0;
	// Идея в том , чтобы найти НОК через НОД , а последний через алгоритм Евклида
	scanf_s("%d %d", &a, &b);

	int orig_a = 0;
	orig_a = a;
	int orig_b = 0;
	orig_b = b;

	while (b != 0)
	{
		int temp = 0;
		temp = b;
		b = a % b;
		a = temp;
	}
	nok = orig_a / a * orig_b;
	printf("%d", nok);
	return 0;
}