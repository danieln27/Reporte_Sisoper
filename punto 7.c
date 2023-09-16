#include <stdio.h>
#define TAM_MAXIMO 80

void main()
{
    char line[TAM_MAXIMO];
    scanf("%s", &line);
    int cont = 0;
    int i = 0;
    while(line[i] != '\0')
    {
     if(line[i] >= 'A' && line[i] <= 'Z' )
        {
            printf("En la posicion %d hay una mayuscula %c \n", i + 1, line[i]);
        }
        i++;   
    }
}