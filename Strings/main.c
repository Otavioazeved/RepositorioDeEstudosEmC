#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Strings



    char palavra[20] = "Linguagem C";
    int tamanho = strlen(palavra);

    printf("Tamanho =  %d\n", tamanho);




    char palavra2 [20] =  "LInguagem C";
    char novapalavra[30];
    strcpy(novapalavra, palavra);

    printf("Copia =  %s\n",novapalavra );

    return 0;
}
