#include <stdio.h>
#include <stdlib.h>

#define FILAS 2
#define COLUMNAS 2

//funciones
void valor_silla(int[FILAS][COLUMNAS]);
//variables constantes
int i,j;

int main()
{
    int matrix[FILAS][COLUMNAS];
    int saltador = 0;
        printf("Ingrese los valores de su Matrix a continuacion: ");
        printf("\n\n");
            for(i=0;i<FILAS;i++)
            {
                for(j=0;j<COLUMNAS;j++)
                {
                    printf("Ingrese valor: ");
                    scanf("%d",&matrix[i][j]);
                }
            }
        printf("\n\n");

            for(i=0;i<FILAS;i++)
            {
                for(j=0;j<COLUMNAS;j++)
                {
                    printf("%d ",matrix[i][j]);
                    saltador++;
                        if(saltador==COLUMNAS)
                        {
                            printf("\n");
                            saltador = 0;
                        }
                }
            }
         printf("\n\n");
         valor_silla(matrix);
         printf("\n\n");

    return 0;
}
void valor_silla(int matrix[FILAS][COLUMNAS])
{
   int contador = 0;

        for(i=0;i<FILAS;i++)
        {
            for(j=0;j<COLUMNAS;j++)
            {
                if(matrix[i][j]<matrix[i+FILAS-1][j] && matrix[i][j]>matrix[i][j])
                {
                    contador++;
                }
            }
        }

    printf("En esta Matrix hay %d valores sillas. ",contador);
}
