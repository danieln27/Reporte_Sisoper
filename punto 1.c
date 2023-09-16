#include <stdio.h>

void main()
{
    int anio;
    printf("Inglese el anio: ");
    scanf("%d", &anio);
    if (anio % 4 == 0 && (anio % 100 != 0 || (anio % 100 == 0 && anio % 400 == 0)))
    {
        printf("El año %d es bisieto", anio);
    }
    else
    {
        printf("El año %d no es bisieto", anio);
    }
}