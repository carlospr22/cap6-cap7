#include<stdio.h>

/* Diagonal principal.
El programa, al recibir como dato una matriz de tipo entero, escribe la
diagonal principal. */
const int TAM = 10;
const Lectura(int [][TAM], int);
const Imprime(int [][TAM], int);

void main (void)
{
    int MAT[TAM][TAM];
    Lectura(MAT, TAM);
    Imprime(MAT, TAM);
}
void Lectura(int A[][TAM], int F)
{
  int I, J;
  for (I=0; I<F; I++)
  for (J=0; J<F; J++)
}
printf("INGRESE EL ELEMENTO %d %d: ", I+1, J+1);
scanf("%d", &A[I][J]);

void Imprime(int A[][TAM], int F)
{
    int I, J;
    for (I=0; I<F; I++)
    for (J=0; J<TAM; J++)
    if (i == j)
    printf("\nDiagonal %d %d %d ", i, j, a[I][J]);
}

