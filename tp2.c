// author: OrionDevInfo
// github: https://github.com/OrionDevInfo

#include <stdio.h>
#define PI 3.14159265358979323846

void ex1()
{
    printf("Exercice 1\n");
    float Pu, QtCom, PTot, Pap, Port, Rem = 0.0;

    printf("Veuillez entrer le prix unitaire du produit: ");
    scanf("%f", &Pu);

    printf("Veuillez entrer la quantité commandée: ");
    scanf("%f", &QtCom);

    PTot = Pu * QtCom;

    if (PTot > 70)
    {
        Port = 0;
    }
    else
    {
        Port = PTot * 0.02;
    }
    if (PTot >= 30 && PTot <= 150)
    {
        Rem = PTot * 0.05;
    }
    else if (PTot > 50)
    {
        Rem = PTot * 0.1;
    }

    printf("Sous-total: %.2f\n", PTot);
    printf("Frais de port: %.2f\n", Port);
    printf("Remise: %.2f\n", Rem);
    printf("Total: %.2f\n", PTot + Port - Rem);
}

void ex2()
{
    printf("Exercice 2\n");
    int a, b, c, temp;

    printf("Veuillez entrer 3 entiers:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }

    printf("Les entiers dans l'ordre croissant sont %d, %d et %d.\n", a, b, c);
}

void ex3()
{
    printf("Exercice 3\n");
    int N, u0 = 0, u1 = 1, un;

    printf("Veuillez entrer un nombre entier N: ");
    scanf("%d", &N);

    printf("Les %d premiers termes de la suite de Fibonacci sont:\n", N);

    for (int i = 0; i < N; ++i)
    {
        printf("%d ", u0);
        un = u0 + u1;
        u0 = u1;
        u1 = un;
    }

    printf("\n");
}

void ex4()
{
    printf("Exercice 4\n");
    int N;

    printf("Veuillez entrer un nombre entier N: ");
    scanf("%d", &N);

    if (N < 0)
    {
        printf("Erreur: N doit être un nombre entier non négatif.\n");
        return;
    }

    int start = 0, end = N;
    int ans = 0;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (mid * mid == N)
        {
            ans = mid;
            break;
        }

        if (mid * mid < N)
        {
            start = mid + 1;
            ans = mid;
        }
        else
        {
            end = mid - 1;
        }
    }

    printf("La partie entière de la racine carrée de %d est: %d\n", N, ans);
}

void ex5a()
{
    printf("Exercice 5a\n");
    float v, sum = 0.0;
    int count = 0;

    for (int i = 0; i < 5; ++i)
    {
        printf("Veuillez entrer la note %d: ", i + 1);
        scanf("%f", &v);

        if (v == 0.0)
        {
            printf("Note éliminatoire.\n");
            return;
        }

        sum += v;
        ++count;
    }

    float avg = sum / count;
    printf("La moyenne des notes est: %.2f\n", avg);
}

void ex5b()
{
    printf("Exercice 5a\n");
    float v, sum = 0.0;
    int count = 0, n;

    printf("Veuillez entrer le nombre de notes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        printf("Veuillez entrer la note %d: ", i + 1);
        scanf("%f", &v);

        if (v == 0.0)
        {
            printf("Note éliminatoire.\n");
            return;
        }

        sum += v;
        ++count;
    }

    float avg = sum / count;
    printf("La moyenne des notes est: %.2f\n", avg);
}

int main()
{
    for (int i = 0; i < 4; ++i) ex1();
    for (int i = 0; i < 6; ++i) ex2();
    ex3();
    for (int i = 0; i < 3; ++i) ex4();
    for (int i = 0; i < 2; ++i) ex5a();
    for (int i = 0; i < 2; ++i) ex5b();
    return 0;
}

// clang tp2.c -o ./Executable/tp2 ; ./Executable/tp2
/*
Exercice 1
Veuillez entrer le prix unitaire du produit: 5
Veuillez entrer la quantité commandée: 5
Sous-total: 25.00
Frais de port: 0.50
Remise: 0.00
Total: 25.50
Exercice 1
Veuillez entrer le prix unitaire du produit: 5
Veuillez entrer la quantité commandée: 6
Sous-total: 30.00
Frais de port: 0.60
Remise: 1.50
Total: 29.10
Exercice 1
Veuillez entrer le prix unitaire du produit: 5
Veuillez entrer la quantité commandée: 15
Sous-total: 75.00
Frais de port: 0.00
Remise: 3.75
Total: 71.25
Exercice 1
Veuillez entrer le prix unitaire du produit: 5
Veuillez entrer la quantité commandée: 32
Sous-total: 160.00
Frais de port: 0.00
Remise: 16.00
Total: 144.00
Exercice 2
Veuillez entrer 3 entiers:
1 2 3
Les entiers dans l'ordre croissant sont 1, 2 et 3.
Exercice 2
Veuillez entrer 3 entiers:
1 3 2
Les entiers dans l'ordre croissant sont 1, 2 et 3.
Exercice 2
Veuillez entrer 3 entiers:
2 1 3
Les entiers dans l'ordre croissant sont 1, 2 et 3.
Exercice 2
Veuillez entrer 3 entiers:
2 3 1
Les entiers dans l'ordre croissant sont 1, 2 et 3.
Exercice 2
Veuillez entrer 3 entiers:
3 1 2
Les entiers dans l'ordre croissant sont 1, 2 et 3.
Exercice 2
Veuillez entrer 3 entiers:
3 2 1
Les entiers dans l'ordre croissant sont 1, 2 et 3.
Exercice 3
Veuillez entrer un nombre entier N: 10
Les 10 premiers termes de la suite de Fibonacci sont:
0 1 1 2 3 5 8 13 21 34
Exercice 4
Veuillez entrer un nombre entier N: 82
La partie entière de la racine carrée de 82 est: 9
Exercice 4
Veuillez entrer un nombre entier N: 255
La partie entière de la racine carrée de 255 est: 15
Exercice 4
Veuillez entrer un nombre entier N: 256
La partie entière de la racine carrée de 256 est: 16
Exercice 5a
Veuillez entrer la note 1: 1
Veuillez entrer la note 2: 5
Veuillez entrer la note 3: 10
Veuillez entrer la note 4: 15
Veuillez entrer la note 5: 19
La moyenne des notes est: 10.00
Exercice 5a
Veuillez entrer la note 1: 1
Veuillez entrer la note 2: 5
Veuillez entrer la note 3: 0
Note éliminatoire.
Exercice 5a
Veuillez entrer le nombre de notes: 3
Veuillez entrer la note 1: 1
Veuillez entrer la note 2: 9
Veuillez entrer la note 3: 5
La moyenne des notes est: 5.00
Exercice 5a
Veuillez entrer le nombre de notes: 15
Veuillez entrer la note 1: 15
Veuillez entrer la note 2: 0
Note éliminatoire.
*/