// Created by Orion MAUBERT on 28/03/2025.

#include <stdio.h>

void triFusion(int T1[], int N1, int T2[], int N2, int C[])
{
	int i = 0, j = 0, k = 0;
	while (i < N1 && j < N2)
	{
		if (T1[i] < T2[j])
		{
			C[k] = T1[i];
			i++;
		}
		else
		{
			C[k] = T2[j];
			j++;
		}
		k++;
	}
	while (i < N1)
	{
		C[k] = T1[i];
		i++;
		k++;
	}
	while (j < N2)
	{
		C[k] = T2[j];
		j++;
		k++;
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
	int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
	int N1 = sizeof(A) / sizeof(A[0]);
	int B[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30};
	int N2 = sizeof(B) / sizeof(B[0]);
	int T[N1 + N2];
	afficherTableau(A, N1);
	afficherTableau(B, N2);
	triFusion(A, N1, B, N2, T);
	afficherTableau(T, N1 + N2);
	printf("\n");
	int A2[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
	int N12 = sizeof(A2) / sizeof(A2[0]);
	int B2[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	int N22 = sizeof(B2) / sizeof(B2[0]);
	int T2[N12 + N22];
	afficherTableau(A2, N12);
	afficherTableau(B2, N22);
	triFusion(A2, N12, B2, N22, T2);
	afficherTableau(T2, N12 + N22);
	printf("\n");
	int A3[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
	int N13 = sizeof(A3) / sizeof(A3[0]);
	int B3[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	int N23 = sizeof(B3) / sizeof(B3[0]);
	int T3[N13 + N23];
	afficherTableau(A3, N13);
	afficherTableau(B3, N23);
	triFusion(A3, N13, B3, N23, T3);
	afficherTableau(T3, N13 + N23);
	printf("\n");
	int A4[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int N14 = sizeof(A4) / sizeof(A4[0]);
	int B4[] = {2, 4, 6, 8, 10};
	int N24 = sizeof(B4) / sizeof(B4[0]);
	int T4[N14 + N24];
	afficherTableau(A4, N14);
	afficherTableau(B4, N24);
	triFusion(A4, N14, B4, N24, T4);
	afficherTableau(T4, N14 + N24);
	return 0;
}


