#include <stdio.h>
 
int main()
{
    int num;
    printf("Ingrese su numero:\n");
    scanf("%d", &num);
    printf("Decimal: %d\n", num);
    printf("Octal: %o\n", num);
    printf("Hexadecimal: %X\n", num);  
}