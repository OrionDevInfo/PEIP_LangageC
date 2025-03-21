// Created by Orion MAUBERT on 21/03/2025.


#include <stdio.h>
#include <math.h>

float f(float x)
{
    return log(x * x);
}

int main()
{
    float a, b, dx, s = 0;
    int i, N;

    printf("Saisir a: "); scanf("%f", &a);
    printf("Saisir b: "); scanf("%f", &b);
    printf("Saisir N: "); scanf("%d", &N);

    if (N % 2)
    {
        printf("N doit être pair.\n");
        return main();
    }

    dx = (b - a) / N;
    for (i = 1; i < N; i++)
    {
        if (i % 2) s += 4 * f(a + i * dx);
        else s += 2 * f(a + i * dx);
    }
    s = (dx / 3) * (f(a) + f(b) + s);
    printf("Intégrale: %.10f\n", s);
    printf("Valeur réelle: %.10f\n", 5.09035488895912);
    return 0;
}