// Created by Orion MAUBERT on 28/03/2025.

#include <stdio.h>
#include <math.h>

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

Complexe sousComplexe(Complexe a, Complexe b)
{
	Complexe c;
	c.re = a.re - b.re;
	c.im = a.im - b.im;
	return c;
}

Complexe mulComplexe(Complexe a, Complexe b)
{
	Complexe c;
	c.re = a.re * b.re - a.im * b.im;
	c.im = a.re * b.im + a.im * b.re;
	return c;
}

Complexe divComplexe(Complexe a, Complexe b)
{
	Complexe c;
	double denom = b.re * b.re + b.im * b.im;
	c.re = (a.re * b.re + a.im * b.im) / denom;
	c.im = (a.im * b.re - a.re * b.im) / denom;
	return c;
}

Complexe conjComplexe(Complexe a)
{
	Complexe c;
	c.re = a.re;
	c.im = -a.im;
	return c;
}

Complexe polaireComplexe(Complexe a)
{
	Complexe c;
	c.re = sqrt(a.re * a.re + a.im * a.im);
	c.im = atan2(a.im, a.re);
	return c;
}

void affichagePolaireComplexe(Complexe c, char nom[])
{
	printf("|%s| =  %.2lf\narg(%s) = %.2lf rad", nom, c.re, nom, c.im);
}

int main()
{
	Complexe a;
	Complexe b;
	a.re = 3; a.im = 4;
	b.re = 2; b.im = 6;
	affichageComplexe(a, "a"); printf("\n");
	affichageComplexe(b, "b"); printf("\n");
	affichageComplexe(addComplexe(a, b), "a + b"); printf("\n");
	affichageComplexe(sousComplexe(a, b), "a - b"); printf("\n");
	affichageComplexe(mulComplexe(a, b), "a * b"); printf("\n");
	affichageComplexe(divComplexe(a, b), "a / b"); printf("\n");
	affichageComplexe(conjComplexe(a), "a*"); printf("\n");
	affichagePolaireComplexe(polaireComplexe(a), "a"); printf("\n");
}