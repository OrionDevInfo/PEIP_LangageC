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

void supprDoublons(int C[], int N, int D[])
{
	int j = 0;
	D[j++] = C[0];
	for (int i = 1; i < N; i++)
	{
		if (C[i] != C[i - 1])
		{
			D[j++] = C[i];
		}
	}
	D[j] = -1;
}

void afficherTableau(int T[], int N)
{
	for (int i = 0; i < N && T[i] != -1; i++)
	{
		printf("%d ", T[i]);
	}
	printf("\n");
}

int main()
{
	int A1[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
	int NA1 = sizeof(A1) / sizeof(A1[0]);
	int B1[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	int NB1 = sizeof(B1) / sizeof(B1[0]);
	int T1[NA1 + NB1];
	afficherTableau(A1, NA1);
	afficherTableau(B1, NB1);
	triFusion(A1, NA1, B1, NB1, T1);
	afficherTableau(T1, NA1 + NB1);

	int D1[NA1 + NB1 + 1];
	supprDoublons(T1, NA1 + NB1, D1);
	afficherTableau(D1, NA1 + NB1);

	printf("\n");

	int A2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int NA2 = sizeof(A2) / sizeof(A2[0]);
	int B2[] = {2, 4, 6, 8, 10};
	int NB2 = sizeof(B2) / sizeof(B2[0]);
	int T2[NA2 + NB2];
	afficherTableau(A2, NA2);
	afficherTableau(B2, NB2);
	triFusion(A2, NA2, B2, NB2, T2);
	afficherTableau(T2, NA2 + NB2);

	int D2[NA2 + NB2 + 1];
	supprDoublons(T2, NA2 + NB2, D2);
	afficherTableau(D2, NA2 + NB2);

	return 0;
}


