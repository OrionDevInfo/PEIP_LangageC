// Created by ORION on 21/03/2025.

#include <stdio.h>
#include <math.h>

double f(double x)
{
	return exp(x) - 2;
}

double bisection(double a, double b, double intv, int *iterations)
{
	double c;
	*iterations = 0;

	while ((b - a) / 2. > intv)
	{
		c = (a + b) / 2.;
		if (f(c) == 0.0)
		{
			break;
		}
		else if (f(c) * f(a) < 0)
		{
			b = c;
		}
		else
		{
			a = c;
		}
		++*iterations;
	}
	return (a + b) / 2.;
}

int main()
{
	double a = 0., b = 2., intv = 0.1;
	int iterations;
	double racine = bisection(a, b, intv, &iterations);
	printf("Interval: [%.2f, %.2f]\nPrécision: %f\nSolution exacte: 0.693147\n", a, b, intv);
	printf("Racine: %.6f\nIterations: %d\n", racine, iterations);
	return 0;
}