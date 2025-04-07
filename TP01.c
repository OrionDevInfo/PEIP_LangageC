// author: Orion
#include <stdio.h>
#define PI 3.14159265358979323846

void ex1() {
  	int A;
	float B;
	char C;

	printf("Enter an integer: ");
	scanf("%d", &A);
	printf("Enter a float: ");
	scanf("%f", &B);
	printf("Enter a char: ");
	scanf(" %c", &C); // Space before %c to ignore the newline character before

	printf("Integer: %d\nFloat: %f\nChar: %c\n", A, B, C);
}

void ex2() {
	int p2, p1, p50, p10;

	printf("Number of 2€ coins: "); scanf("%d", &p2);
	printf("Number of 1€ coins: "); scanf("%d", &p1);
	printf("Number of 50c coins: "); scanf("%d", &p50);
	printf("Number of 10c coins: "); scanf("%d", &p10);

	printf("Total: %.2f€\n", p2 * 2 + p1 + p50 * 0.5 + p10 * 0.1);
}

void ex3() {
	unsigned int seconds, h, m, s;

	printf("Enter a number of seconds (<65000): "); scanf("%d", &seconds);
	if (seconds >= 65000) {
		printf("Number of seconds must be between 0 and 65000.\n");
		return;
	}
	h = seconds / 3600;
	m = (seconds % 3600) / 60;
	s = seconds % 60;

	printf("%d seconds is %dh, %dm and %ds.\n", seconds, h, m, s);
}

void ex4() {
	float r;
	printf("Enter the radius [cm]: "); scanf("%f", &r);

	printf("Surface: %.6f cm^2\nVolume: %.6f cm^3\n", 4 * PI * r * r, 4 / 3. * PI * r * r * r);
}

int main() {
	ex1();
	ex2();
	ex3();
	ex4();
	return 0;
}