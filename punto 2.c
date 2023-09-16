#include <stdio.h>

void main()
{
    int mat, cNat, soci, lect, ingl;
    int sum;
    printf("ingrese sus puntuaciones en cada materia: \n");
    scanf("%d", &mat);
    scanf("%d", &cNat);
    scanf("%d", &soci);
    scanf("%d", &lect);
    scanf("%d", &ingl);
    sum = (mat + cNat + soci + lect + ingl) / 5;
    if (sum >= 60)
    {
        printf("Quedaste en la primera division!\n");
        printf("Tu percentil es de: %d", sum);
    }
    else if (sum >= 50 && sum < 60)
    {
        printf("Quedaste en la segunda division.\n");
        printf("Tu percentil es de: %d", sum);
    }
    else
    {
        printf("Quedaste en la tercera division :(\n");
        printf("Tu percentil es de: %d", sum);
    }
}