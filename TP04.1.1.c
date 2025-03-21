// Created by Orion MAUBERT on 21/03/2025.

#include <stdio.h>

int main()
{
  int N;

  printf("Table de "); scanf("%d", &N);

  if (N < 1 || N > 9)
  {
    printf("Erreur: N doit être compris entre 1 et 9.\n");
    return main();
  }

  for (int i = 1; i <= 10; i++)
  {
	printf("%d x %d = %d\n", N, i, N * i);
  }

  return 0;
}