// Created by Orion MAUBERT on 28/03/2025.

#include <stdio.h>

int main()
{
	int a = 10;
	int *pa = &a;
	printf("a = %d\n", a);
	printf("pa = %p\n", pa);
	printf("&a = %p\n", &a);
	printf("*pa = %d\n", *pa);
}


