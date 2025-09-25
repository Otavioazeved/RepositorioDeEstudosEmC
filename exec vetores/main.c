#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main()
{

/*
    Crie um vetor de 5 inteiros.
Peça para o usuário digitar os 5 números.
Depois, conte quantos deles são pares e imprima a quantidade.
*/

int numeros[TAM];
int i, contador = 0;
printf("Digite %d inteiros: ", TAM);
for(i=0; i < TAM; i++){
    scanf("%d", &numeros[i]);
}
for(i=0; i < TAM; i++){
    if(contador  % 2 ==0){
        printf("voce digitou %d pares \n", contador);
    }else{
        printf("Voce digitou %d\n inteiros e nenhum par");
    }
}



    return 0;
}
