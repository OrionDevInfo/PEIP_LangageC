// Created by Orion MAUBERT on 28/03/2025.

#include <stdio.h>

typedef struct Complexe Complexe;

struct Complexe {
	double re;
	double im;
};

void affichageComplexe(Complexe c, char nom[])
{
	char signe = c.im < 0 ? '-' : '+' ;
	double im = c.im < 0 ? -c.im : c.im;
	printf("%s =  %.2lf %c %.2lfi", nom, c.re, signe, im);
}

Complexe addComplexe(Complexe a, Complexe b)
{
	Complexe c;
	c.re = a.re + b.re;
	c.im = a.im + b.im;
	return c;
}

int main()
{
	Complexe a;
	Complexe b;
	a.re = 3; a.im = 4;
	b.re = 2; b.im = -6;
	affichageComplexe(a, "a"); printf("\n");
	affichageComplexe(b, "b"); printf("\n");
	affichageComplexe(addComplexe(a, b), "a + b"); printf("\n");

}