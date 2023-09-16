#include <stdio.h>

int fibo(int num)
{
    int ans;
    if (num == 0)
    {
        ans = 0;
    }
    else if (num == 1)
    {
        ans = 1;
    }
    else
    {
        ans = fibo(num-1) + fibo(num-2);
    } 
    return ans;
}

void main()
{
    int num;
    printf("Ingrese el numero: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Los numero no es positivo");    
    }
    else
    {
        printf("El resultado de la serie de fibonnaci es: %d", fibo(num));
    }
}