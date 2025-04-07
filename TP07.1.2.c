// Created by Orion MAUBERT on 28/03/2025.

#include <stdio.h>

int main(void)
{
	int tab[6]={0, 1, 2, 3, 4, 5};
	char car[6]={'a', 'b', 'c', 'd', 'e', 'f'};
	int* p1=tab;
	char* p2=car;
	int i;
	printf("(*p1=%i, p1=%p) (tab[0]=%i, &tab[0]=%p)", *p1, p1, tab[0], &tab[0]);
	printf("(*p2=%c, p2=%p) (car[0]=%c, &car[0]=%p)", *p2, p2, car[0], &car[0]);
	for (i=0; i<6; i=i+1)
	{
		printf("\n %i %x ", *p1, p1);
		p1=p1+1;
	}
	for (i=0; i<6; i=i+1)
	{
		printf("\n %c %x ", *p2, p2);
		p2=p2+1;
	}
	return 0;
}