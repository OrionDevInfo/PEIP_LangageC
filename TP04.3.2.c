// Created by ORION on 21/03/2025.

#include <stdio.h>
#include <math.h>

double f(double x) {
	return pow(x, 5) - 2 * x - 5;
}

double bisection(double a, double b, double intv, int *iterations) {
	double c;
	*iterations = 0;

	while ((b - a) / 2.0 > intv) {
		c = (a + b) / 2.0;
		if (f(c) == 0.0) {
			break;
		}
		if (f(a) * f(c) < 0) {
			b = c;
		} else {
			a = c;
		}
		(*iterations)++;
	}
	return (a + b) / 2.0;
}

int main()
{
	double a = 1.0, b = 3.0;
	double precisions[] = {1e-6, 1e-8, 1e-10};
	int iterations;
	double racine;

	for (int i = 0; i < 3; i++) {
		racine = bisection(a, b, precisions[i], &iterations);
		printf("Precision: %.0e\n", precisions[i]);
		printf("Racine: %.10f\n", racine);
		printf("Iterations: %d\n\n", iterations);
	}

	return 0;
}
