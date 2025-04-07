// Created by Orion MAUBERT on 28/03/2025.

#include <stdio.h>

int RechMax(int* AdrTab, int LongTab)
{
	int max = AdrTab[0];
	for (int i = 1; i < LongTab; i++)
	{
		if (AdrTab[i] > max)
		{
			max = AdrTab[i];
		}
	}
	return max;
}

int* RechAdrMax(int* AdrTab, int LongTab)
{
	int max = AdrTab[0];
	int* pmax = &AdrTab[0];
	for (int i = 1; i < LongTab; i++)
	{
		if (AdrTab[i] > max)
		{
			max = AdrTab[i];
			pmax = &AdrTab[i];
		}
	}
	return pmax;
}

int RechRemplace(int* AdrTab, int LongTab, int ElemRech, int ElemRemp)
{
	int c = 0;
	for (int i = 0; i < LongTab; i++)
	{
		if (AdrTab[i] == ElemRech)
		{
			AdrTab[i] = ElemRemp;
			c++;
		}
	}
	return c;
}

int main()
{
	int T1[] = {7, 8, 0, 1, 4, 2, 9, 3, 5, 6};
	int T2[] = {1, 2, 3, 4, 5, 4, 2, 3, 5, 1};
	printf("Le maximum de T1 est %d\n", RechMax(T1, 10));
	printf("Le maximum de T2 est %d\n", RechMax(T2, 10));

	int* pT1 = T1;
	printf("L'adresse maximum de T1 est %p\n", RechAdrMax(pT1, 10));
	printf("Valeurs et adresses de T1\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%i %x\n", *pT1, pT1);
		pT1++;
	}

	int T3[] = {5, 10, 15, 10, 25, 10, 35, 10, 45, 10};
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", T3[i]);
	}
	printf("\nLe nombre de remplacements de 10 par 100 dans T3 est %d\n", RechRemplace(T3, 10, 10, 100));
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", T3[i]);
	}

	return 0;
}