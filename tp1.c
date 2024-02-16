// author: OrionDevInfo
// github: https://github.com/OrionDevInfo

#include <stdio.h>
#define PI 3.14159265358979323846

void ex1()
{
    printf("Exercice 1\n");
    int A;
    float B;
    char Car;

    printf("Veuillez entrer un entier A: ");
    scanf("%d", &A);

    printf("Veuillez entrer un réel B: ");
    scanf("%f", &B);

    printf("Veuillez entrer un caractère Car: ");
    scanf(" %c", &Car); // Espace avant %c pour ignorer le caractère de nouvelle ligne précédent

    printf("Vous avez entré l'entier %d, le réel %.2f et le caractère %c.\n", A, B, Car);
}

void ex2()
{
    printf("Exercice 2\n");
    int p2e, p1e, p50c, p10c;
    float total;

    printf("Veuillez entrer le nombre de pièces de 2 euros: ");
    scanf("%d", &p2e);

    printf("Veuillez entrer le nombre de pièces de 1 euro: ");
    scanf("%d", &p1e);

    printf("Veuillez entrer le nombre de pièces de 50 centimes: ");
    scanf("%d", &p50c);

    printf("Veuillez entrer le nombre de pièces de 10 centimes: ");
    scanf("%d", &p10c);

    total = p2e * 2 + p1e + p50c * 0.5 + p10c * 0.1;

    printf("Le contenu total de votre tirelire est de %.2f euros.\n", total);
}

void ex3()
{
    printf("Exercice 3\n");
    int secondes, h, m, s;

    printf("Veuillez entrer le nombre de secondes: ");
    scanf("%d", &secondes);

    if (secondes < 0 || secondes >= 65000)
    {
        printf("Le nombre de secondes doit être compris entre 0 et 65000.\n");
        return;
    }

    h = secondes / 3600;
    m = (secondes % 3600) / 60;
    s = (secondes % 3600) % 60;

    printf("%d secondes sont equivalentes à %d heure%s, %d minute%s et %d seconde%s.\n",
           secondes,
           h, (h > 1) ? "s" : "",
           m, (m > 1) ? "s" : "",
           s, (s > 1) ? "s" : "");
}

void ex4()
{
    printf("Exercice 4\n");
    int r;
    float surface, volume;

    printf("Veuillez entrer le rayon de la sphère [cm]: ");
    scanf("%d", &r);

    surface = 4 * PI * r * r;
    volume = 4. / 3 * PI * r * r * r;

    printf("La surface de la sphère est de %f [cm^2] et son volume est de %f [cm^3].\n", surface, volume);
}

int main()
{
    ex1();
    ex2();
    ex3();
    ex4();
    return 0;
}

// clang tp1.c -o tp1 ; ./tp1
/*
Exercice 1
Veuillez entrer un entier A: 1
Veuillez entrer un réel B: 3.14
Veuillez entrer un caractère Car: a
Vous avez entré l'entier 1, le réel 3.14 et le caractère a.
Exercice 2
Veuillez entrer le nombre de pièces de 2 euros: 1
Veuillez entrer le nombre de pièces de 1 euro: 2
Veuillez entrer le nombre de pièces de 50 centimes: 1
Veuillez entrer le nombre de pièces de 10 centimes: 5
Le contenu total de votre tirelire est de 5.00 euros.
Exercice 3
Veuillez entrer le nombre de secondes: 7270
7270 secondes sont equivalentes à 2 heures, 1 minute et 10 secondes.
Exercice 4
Veuillez entrer le rayon de la sphère [cm]: 5
La surface de la sphère est de 314.159271 [cm^2] et son volume est de 523.598755 [cm^3].
*/