#include <stdio.h>

int factorial(int num)
{
    int ans;
    if (num == 0)
    {
        ans = 1;
    }
    else
    {
        ans = num * factorial(num-1);
    }
    return ans;
}

void main()
{
    int num;
    printf("Ingrese el numero: ");
    scanf("%d", &num);
    printf("El factorial de %d es %d", num, factorial(num));
}