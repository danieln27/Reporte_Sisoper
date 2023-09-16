#include <stdio.h>

int potencia(int num, int pow)
{
    int ans;
    if (pow == 0)
    {
        ans = 1;
    }
    else
    {
        ans = potencia(num, pow-1) * num;
    }
    return ans;
}

void main()
{
    int num, pow;
    printf("Ingrese su numero y la potencia:\n");
    scanf("%d", &num);
    scanf("%d", &pow);
    printf("El resultado es: %d", potencia(num, pow));
}