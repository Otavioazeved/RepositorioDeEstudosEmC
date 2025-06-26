#include <stdio.h>
#include <stdlib.h>

#define tam 20
int main() {
    int matriz [matriz]
    int soma = 0;
    // ler a matriz
    printf("Digite uma matriz de 9 numeros inteiros");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            scanf("%d\n", &matriz[i][j]);
        }
    }

    // imprimir a matriz fornecida pelo usuario
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}
