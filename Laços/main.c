#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
 int a, b;
 printf("Digite dois valores: "); scanf(" %d %d", &a, &b);
 while(a < b){
    printf(" %d\n", a);
 }
 */
 // imprimindo a tabuada do 5;
/*
 int n=1;
 while(n <=10){
    printf("5 * %2d = %2d\n", n, 5 * n);
    n++;
 }
 */
 // For
/*
 int i;
 for(i = 1; i <= 10; i++){ // posso colocar mais de uma inicialização, porem devo separar por virgula.
    printf("n = %d\n", i);
 }
 printf("Fim da execucao");
 */
/*
 int a, b;
 printf("Digite dois valores inteiros: "); scanf(" %d %d", &a, &b);
 do{
        printf(" %d\n", a);
        a++;

 }while(a < b);
 printf("Fim da execucao");
 */
 /*
 for(int i = 0; i<=10; i++){
    printf(" %d\n", 2*i);
 }
 printf("Fim da execucao");
 */

 // comando break;
/*
 for(int i = 0; i < 5; i++){
    if(i == 4){
        break;

    }
    printf(" %d\n", i);
 }
printf("Fim da execucao");
*/
// exercicios 01
/*
int a;
while(1){
    printf("Digite um nuemero: "); scanf(" %d", &a);
    if(a % 7 == 0){
        printf("Numero negativo encontrado. exec interrompida.");
        break;
    }

}
*/

// exec 02
/*
int i;
for( i = 1; i <= 10; i++){
        printf("Digite um numero (%/10):"); scanf(" %d", &i);

    if(i < 0){
            printf(" Numero negativo encontrado. execu interrompida.");
        break;
    }
    printf(" voce digitou %d\n", i);
}
*/
 // exec 03;
/*
int i;
for(i = 1; i<= 10; i++){
    if(i % 3 == 0){
        continue;
    }
    printf(" %d\n",i);

}
*/
// aninhamento de repetições ( while, for e do while) dentro do outro;
/*

int i, j;
for(i=1; i<5;i++){
    for(j=1; j<5; j++){
        if(i == j){
            printf("1 ");
        }else{
            printf("0 ");

        }
        printf("\t");
    }
}
*/
// exer...
/*
int i, j, n;
printf("Introdu um N: "); scanf(" %d", &n);
for(i=1, j=n; i<=n; i++, j--){
    printf(" %d %d\n", i, j);
}
*/

int i;
printf(" %d", i, (char) i);








    return 0;
}
