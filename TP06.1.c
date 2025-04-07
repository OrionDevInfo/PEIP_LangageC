// Created by Orion MAUBERT on 28/03/2025.

#include <stdio.h>

void triBulles(int T[], int N)
{
	for (int i = N - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (T[j] > T[j + 1])
			{
				int temp = T[j];
				T[j] = T[j + 1];
				T[j + 1] = temp;
			}
		}
	}
}

void afficherTableau(int T[], int N)
{
	for (int i = 0; i < N; i++)
	{
		printf("%d ", T[i]);
	}
	printf("\n");
}

int main()
{
	int T1[] = {10, 4, 25, 21, 8};
	int N1 = sizeof(T1) / sizeof(T1[0]);
	printf("Tableau avant tri: ");
	afficherTableau(T1, N1);
	triBulles(T1, N1);
	printf("Tableau après tri: ");
	afficherTableau(T1, N1);

	int T2[] = {25, 21, 10, 8, 4};
	int N2 = sizeof(T2) / sizeof(T2[0]);
	printf("\nTableau avant tri: ");
	afficherTableau(T2, N2);
	triBulles(T2, N2);
	printf("Tableau après tri: ");
	afficherTableau(T2, N2);

	int T3[] = {4, 21, 10, 21, 25};
	int N3 = sizeof(T3) / sizeof(T3[0]);
	printf("\nTableau avant tri: ");
	afficherTableau(T3, N3);
	triBulles(T3, N3);
	printf("Tableau après tri: ");
	afficherTableau(T3, N3);
	return 0;
}
