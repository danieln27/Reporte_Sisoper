#include <stdio.h>

void main()
{
    int num;
    printf("Ingrese el numero: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("El numero %d es par", num);
    }
    else
    {
        printf("El numero %d es impar", num);
    } 
}