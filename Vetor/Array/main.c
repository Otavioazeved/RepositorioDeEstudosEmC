#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    //strlen
    char  palavra [29] =  "Linguagem C";
    int length = strlen(palavra);

    printf("length = %d\n", length);


    //strcpy
    char palavra2 [20] = "Flamengo Campeao";
    char novapalavra[30];
    strcpy(novapalavra,palavra2);

    printf("Copia = %s\n", novapalavra);

    //strcat
    char palavra3 [10] = "Flamengo ";
    char palavra4 [10] = "Win";
    strcat (palavra3, palavra4);

    printf(" Palavra = %s\n", palavra3);


    //  strcmp

    char palavra5 [12] = "Linguagem Java";
    char palavra6 [12] = "Linguagem Java";
    if(strcmp (palavra5, palavra6) == 1){
        printf("Strings iguais\n ");
    }else {
        printf("Strings diferentes\n");

    }

    return 0;
}
