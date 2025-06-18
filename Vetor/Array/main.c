#include <stdio.h>
#include <stdlib.h>

int main() {
   int mat[2][3];
   for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite os valores na posicao: [%d] [%d]", i, j);
            scanf("%d", &mat[i][j]);
        }
   }

   printf("\nMatriz digitada\n");
   for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++){
        printf("%d", mat[i][j]);
    }
    printf("\n");
   }

    return 0;
}
