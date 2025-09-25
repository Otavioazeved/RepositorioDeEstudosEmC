#include <stdio.h>
#include <stdlib.h>
#define LIN 10
#define COL 5

int main()
{
    /*
    // array de duas dimensões: matriz
    // forma geral:
    // tipo nome_array [nro_dlinhas][nro_dcolunas];
    int mat[LIN][COL];
    int i,j;
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("Digite mat: %d %d", i, j);
            scanf("%d", &mat[i][j]);
             printf("%d", mat[i][j]);
        }
      printf("\n");
    }
// posso declarar um array com quantas dimensões eu quiser em C;

*/
int mat [10][5];
int i, j;
for(i=0;i<100;i++){
    for(j=0;j<50;j++){
        printf("digite mat [%d] [%d]: ", i, j);
        scanf("%d", &mat[i][j]);
    }
}



    return 0;
}
