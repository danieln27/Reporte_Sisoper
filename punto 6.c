#include <stdio.h>

void main()
{
    int num1, num2, num3;
    printf("Ingrese los numeros: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    int arr[] = {num1, num2, num3};
    int max = num1;
    for (int i = 0; i < 3; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("El maximo de los tres es: %d", max);
}