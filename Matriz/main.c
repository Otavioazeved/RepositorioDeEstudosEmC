#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[10][5];
    int i, j;
    for(i = 0; i < 10; i++){
        for(j = 0; j < 5; j++){
            printf("Digite mat[%d] [%d]", i, j);
            scanf("%d", &mat[i][j]);

        }
    }

    return 0;
}
