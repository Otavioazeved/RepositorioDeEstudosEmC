#include <stdio.h>
#include <stdlib.h>

int main()
{
    // operadores logicos em C
    /*
    int x, y;
    printf("digite o primeiro inteiro: "); scanf(" %d", &x);
    printf("digite o segundo inteiro: "); scanf(" %d", &y);
    printf("o resultado de: %d == %d : %d\n", x, y, x == y);
    */

    // numero positivo ou nao
    /*
    int x;
    printf("Verificar se um numero e postivo ou negativo: ");
    scanf("%d", &x);
    if( x < 0){
        printf("Este numero e negativo");
    } else{
        printf("Este numero e positivo");

    }
    */
    // programa para adicionar 1000 reais de sal ao um individuo caso o sal dele fosse menor que 100000
    /*
    float sal;

    printf(" Informe seu salario: ");
    scanf("%f", &sal );
    if(sal < 100000){
            sal = sal + 1000;
            printf("Seu novo salario agora e: %.2f\n", sal);
    }else{
        printf("Seu salario esta conpativel com o que queriamos saber");

    }
    */


    float salario;
    printf("Informe seu salario: ");
    scanf("%f", &salario);
    if(salario <= 0){
        printf("salario incompativel");
    } else if(salario > 1000){
         salario = (salario * 0.10);
         printf("imposto descontado: %.2f\n", salario);
         printf("Novo salario pós desconto: %.2f\n", salario * 0.10);

    } else{
        salario < 1000;
        salario = (salario * 0.05);
        printf("imposto descontado: %.2f\n", salario);
        printf("Novo salario pós desconto: %.2f\n", salario * 0.05);

    }



    return 0;
}
