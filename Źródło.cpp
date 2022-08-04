#pragma warning( disable : 6031 )
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <math.h>

int e, z;
float* x;

int main()
{

	printf("Ile elementow ma zostac wygenerowane?\n");
	scanf("%d", &e);
	printf("W jakim zakresie?\n");
	scanf("%d", &z);
	x = (float*)malloc(e * sizeof(float));
	srand(time(NULL));
	for (int i = 0; i < e; i++)
	{
		x[i] = (rand() % (2 * z)) - z;
	}

	FILE* dane1 = fopen("dane.txt", "w");
	fprintf(dane1, "%d\n", e);
	for (int i = 0; i < e; i++)
	{
		fprintf(dane1, "%f\n", x[i]);
	}
	fclose(dane1);
	free(x);
	return 0;
}
