#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Aninhamento de repetições

   /*int i, j;
   for(i=1; i<5; i++){
    for(j=1; j<5; j++){
        if(i == j)
            printf("1");
        else
            printf("0");


    }
    printf("\n");

   }
   */

   // break

   int a, b;
   printf("Insira o valor de A: ");
   scanf("%d", &a);
   printf("Insira o valor de B: ");
   scanf("%d", &b);
   do{
        printf("%d\n", a);
        a++;
   } while(a <= 5);

    return 0;
}
