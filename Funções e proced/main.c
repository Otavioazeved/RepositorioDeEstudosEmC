#include <stdio.h>
#include <stdlib.h>


/* nesse código eu peço ao usuário pra digitar dois numeros,
em seguida, chamo a função max passando a e b como argumentos,
a função compara, e o resultado vai pra variavel maior.
*/



int max(int n1, int n2){
    if( n1 > n2){
        return n1;
    }else{
        return n2;

    }

}
int main()
{

int a, b, maior;
printf("Informe dois numeros: ");
scanf("%d %d", &a, &b);
 maior = max(a, b);
 printf(" maior inteiro %d\n", maior);




    return 0;
}
