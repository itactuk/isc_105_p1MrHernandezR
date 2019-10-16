#include <stdio.h>
#include <stdlib.h>

//funciones
int suma(int,int);
int resta(int,int);
int multiplicacion(int,int);
int division(int,int);
//estructuras
struct complejo
{
    int real;
    int imaginario;

};

int main()
{
   int numero1,numero2;
   printf("Ingrese el primer valor: "); scanf("%d",&numero1);
   printf("Ingrese el segundo valor: "); scanf("%d",&numero2);


    return 0;
}

int suma(int a,int b)
{
    struct complejo imaginario1;
    struct complejo imaginario2;
    struct complejo real1;
    struct complejo real2;
    imaginario1.imaginario = 4;
    imaginario2.imaginario = 3;
    real1.real = a;
    real2.real = b;
    int operdador1 = real1+imaginario1;
    int operador2 = real2+imaginario2;

        return operdador1 && operador2;


}

int resta(int a,int b)
{
    struct complejo imaginario1;
    struct complejo imaginario2;
    struct complejo real1;
    struct complejo real2;
    imaginario1.imaginario = 4;
    imaginario2.imaginario = 3;
    real1.real = a;
    real2.real = b;
    int operdador1 = real1-imaginario1;
    int operador2 = real2-imaginario2;

        return operdador1 && operador2;

}

int multiplicacion(int a,int b)
{
    struct complejo imaginario1;
    struct complejo imaginario2;
    struct complejo real1;
    struct complejo real2;
    imaginario1.imaginario = 4;
    imaginario2.imaginario = 3;
    real1.real = a;
    real2.real = b;
    int operdador1 = real1*imaginario1;
    int operador2 = real2*imaginario2;

        return operdador1 && operador2;

}

int division(int a,int b)
{
    struct complejo imaginario1;
    struct complejo imaginario2;
    struct complejo real1;
    struct complejo real2;
    imaginario1.imaginario = 4;
    imaginario2.imaginario = 3;
    real1.real = a;
    real2.real = b;
    int operdador1 = real1/imaginario1;
    int operador2 = real2/imaginario2;

        return operdador1 && operador2;

}
