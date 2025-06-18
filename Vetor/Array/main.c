#include <stdio.h>
#include <stdlib.h>

int main() {
    int vet[5], soma = 0;
    for(int i = 0; i < 5; i++){
            printf("digite os valores da posicao: %d", i);
        scanf("%d", &vet[i]);
        soma = soma + vet[i];
    }
    printf(" a soma dos valores %d\n", soma);


    return 0;
}
