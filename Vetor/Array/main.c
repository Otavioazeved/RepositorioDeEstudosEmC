#include <stdio.h>
#include <stdlib.h>
#define TAM 5
#define NUM 5


int main() {
    int numeros[TAM];

int i;
printf(" Digite %d inteiros: ", TAM);
for(i = 0; i < TAM; i++){
        scanf("%d", &numeros[i]);

}
printf("VOce digitou: \n");
for(i=0; i < TAM; i++){
    printf("%d\n", numeros[i]);


}

/*
Crie um vetor de 5 inteiros.
Peça para o usuário digitar os 5 números e armazene no vetor.
Depois, calcule a soma de todos os números e imprima o resultado.
*/
int tamanho[NUM];
int i, soma = 0;
printf(" Digite %d inteiros: ", NUM);
for(i=0; i < NUM; i++){
    scanf(" %d", &tamanho[i]);
}


for(i=0; i < NUM; i++){
   soma += tamanho[i];
}
printf("a soma dos numeros digitados foi: %d\n ", soma);



















    return 0;
}
