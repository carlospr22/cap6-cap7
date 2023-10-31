#include <stdio.h>

/* Suma matrices.
El programa, al recibir como datos dos arreglos bidimensionales del mismo
➥tamaño, calcula la suma de ambos y la almacena en un tercer arreglo
➥bidimensional. */
const int MAX = 50;
void Lectura(int [][MAX], int, int);
void Suma(int [][MAX], int [][MAX], int [][MAX], int, int);
void Imprime(int [][MAX], int, int);

void main(void)
{
    int MA[MAX][MAX], MB[MAX][MAX], MC[MAX][MAX];
    int FIL, COL;
    do
    {
        printf("INGRESE EL NUMERO DE FILAS DE LOS ARREGLOS: ");
        scanf("%d", &FIL);
    }
    while (FIL> MAX ||FIL< 1);
    do
    {
        printf("INGRESE EL NUMERO DE COLUNMNAS DE LOS ARREGLOS: ");
        scanf("%d", &COL);
    }
    while (COL > MAX || COL < 1);
    printf("\nLECTURA DEL ARREGLO MA\n");
    Lectura(MA, FIL, COL);
    printf("\nLECTURA DEL ARREGLO MB\n");
    Lectura(MB, FIL, COL);
    Suma (MA, MB, MC, FIL, COL);
    printf("\nLECTURA DEL ARREGLO MC\n");
    Imprime (MC, FIL, COL);
}
void Lectura(int A[][MAX], int F, int C)
{
    int I, J;
    for (I=0; I<F; I++)
    for (J=0; J<C; J++)

{
    printf("INGRESE EL ELEMENTO %d %d: ", I+1, J+1);
    scanf("%d", &A[I][J]);
}
}
void Suma(int M1[][MAX], int M2[][MAX], int M3[][MAX], int F, int C)
{
    int I, J;
    for (I=0; I<F; I++)
    for (J=0; J<C; J++)
    M3[I][J]= M1[I][J] + M2[I][J];
}
void Imprime(int A[][MAX], int F, int C)
{
  int I, J;
    for (I=0; I<F; I++)
    for (J=0; J<C; J++)
        printf("\nELEMENTO %d %d: %d ", I, J, A[I][J]);
}

