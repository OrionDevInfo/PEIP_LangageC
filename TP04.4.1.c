// Created by Orion MAUBERT on 21/03/2025.
#include <stdio.h>
#include <math.h>

float f(float x)
{
	return exp(x);
}

float simpson(float a, float b, int N)
{
	float dx = (b - a) / N;
	float s = 0;

	if (N % 2)
	{
		printf("N doit être pair.\n");
		return -1;
	}

	for (int i = 1; i < N; i++)
	{
		if (i % 2)
			s += 4 * f(a + i * dx);
		else
			s += 2 * f(a + i * dx);
	}
	return (dx / 3) * (f(a) + f(b) + s);
}

int main()
{
	float a, b;
	double intv, value1, value2, precision = 1e0;
	int N = 10;

	printf("Saisir a: "); scanf("%f", &a);
	printf("Saisir b: "); scanf("%f", &b);
	printf("Saisir intv (1e-X): "); scanf("%lf", &intv);

	while (precision > intv)
	{
		value1 = simpson(a, b, N);
		N *= 2;
		value2 = simpson(a, b, N);
		precision = fabs(value1 - value2);
	}
	printf("Valeur finale: %.10f\nIntérations: %d\n", value2, N);
	return 0;
}