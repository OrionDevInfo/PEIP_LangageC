// Created by Orion MAUBERT on 21/03/2025.

#include <stdio.h>

int main()
{
  int N, c = 0;

  printf("Table de "); scanf("%d", &N);

  if (N < 1 || N > 9)
  {
    printf("Erreur: N doit être compris entre 1 et 9.\n");
    return main();
  }

  for (int i = 1; i <= 10; i++)
  {
    int ans;
	  printf("%d x %d = ", N, i); scanf("%d", &ans);
    if (ans != N * i)
    {
      printf("Erreur: %d x %d = %d\n", N, i, N * i);
      c++;
    }
  }

  printf("Nombre d'erreurs: %d\n", c);
  return 0;
}