#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* int x;
    printf("digite um valor inteiro: ");
    scanf("%d", &x);
    if(x % 2 == 0){
        printf("esse valor eh par", x);

    }else{
        printf("esse valor eh impar\n");
    }
    printf("Fim do programa \n");
    */

    /*int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num == 0){
        printf("o numero eh igual a 0.\n");

    }else if(num > 0){
            printf("o numero e maior que 0. \n");


    }else{
        printf("o numero eh menor que 0");

    }


*/

/*int a, b;
printf("Digite dois valores: ");
scanf("%d %d", &a, &b);
while(a < b){
a++;
printf("%d\n", a);
}*/

// comando for
/*int a, b,i;
printf("Digite dois valores inteiros: ");
scanf("%d %d", &a, &b);
for(i = 0; i<b; i++){
printf("%d\n", i);

}
*/

// do while permite executar pelo menos uma vez, mesmo a condição sendo falsa

int a, b;
printf("Digite dois valores inteiros: ");
scanf("%d %d", &a, &b);
do{
    printf("%d\n", a);
    a++;
} while( a < b);

printf("Fim do programa");







    return 0;
}
