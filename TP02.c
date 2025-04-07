#include <stdio.h>

void ex1() {
	int QtCom;
	float Pu, Port = 0, Rem = 0;

	printf("Enter unit price: "); scanf("%f", &Pu);
	printf("Enter quantity: "); scanf("%d", &QtCom);
	float PTot = Pu * QtCom;
	if (PTot <= 70) {
		Port = PTot * 0.02;
	}
	if (PTot > 150) {
		Rem = PTot * 0.10;
	}
	else if (PTot >= 30) {
		Rem = PTot * 0.05;
	}
	printf("Unit Price: %.2f\nQuantity: %d\nSub-total: %.2f\n", Pu, QtCom, PTot);
	printf("Shipping: %.2f\nDiscount: %.2f\n", Port, Rem);
	printf("Total: %.2f", PTot - Rem + Port);
}

void ex2() {
	int a, b, c;

	printf("Enter 3 integers:\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b) {
		int temp = a; a = b; b = temp;
	}
	if (a > c) {
		int temp = a; a = c; c = temp;
	}
	if (b > c) {
		int temp = b; b = c; c = temp;
	}
	printf("Here are the integers in order: %d %d %d\n", a, b, c);
}

void ex3() {
	unsigned int N, u0 = 0, u1 = 1, un;

	printf("Enter an integer: "); scanf("%d", &N);
	printf("The first %d terms of the Fibonacci sequence are:\n", N);
	for (int i = 0; i < N; i++) {
		printf("%d ", u0);
		un = u0 + u1;
		u0 = u1;
		u1 = un;
	}
	printf("\n");
}

void ex4() {
	unsigned int N, i = 0;

	printf("Enter an integer: "); scanf("%d", &N);
	while (i * i <= N) {
		i++;
	}
	printf("The integer part of the square root of %d is: %d\n", N, i - 1);
}

int main() {
	// ex1();
	// ex2();
	// ex3();
	ex4();
	return 0;
}
