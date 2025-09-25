#include <stdio.h>
#include <stdlib.h>

int main()
{

    // iniciando uma matriz
   // somando elementos de um array
   int i, lista[5] = {1,2,3,4,5};
   int soma = 0;
   for(i=0; i<5; i++){
    soma += lista[i];

   }
   printf("Soma = %d\n", soma);


  // somar uma matriz
   int mat [3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
   int i, j, soma = 0;
   for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        soma += mat[i][j];
    }

   }
     printf("soma = %d\n", soma);
     */




    return 0;
}
