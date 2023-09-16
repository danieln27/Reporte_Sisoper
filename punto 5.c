#include <stdio.h>

void main()
{
    int num1;
    float num2;
    printf("Ingrese los numeros:\n");
    scanf("%d", &num1);
    scanf("%f", &num2);
    printf("%d = %d + %d\n", num1 + (int)num2, num1, (int)num2);
    printf("%.1f = %.1f + %.1f\n", (float)num1 + num2, (float)num1, num2);
}