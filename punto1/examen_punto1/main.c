#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inversa();

int main()
{
    printf("Introduzca el texto deseado: ");
    inversa();
    printf("\n");

    return 0;
}
void inversa()
{
    char letra = getchar();
        if(letra=='\n')
        {
            return;
        }
        else
        {
            inversa();
            putchar(letra);
        }

}
