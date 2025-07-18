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
// descobrir e taxar salarios dos funcionarios
/*
    float salario;
    printf("Informe seu salario: ");
    scanf("%f", &salario);
    if(salario <= 0){
        printf("salario incompativel");
    } else if(salario > 1000){
         salario = (salario * 0.10);
         printf("imposto descontado: %.2f\n", salario);

    } else{
        salario < 1000;
        salario = (salario * 0.05);
        printf("imposto descontado: %.2f\n", salario);


    }
    */

    // progama pra taxar solteiro e casados
    /*
    float salario;
    char est_civil;

    printf("Digite seu salario: "); scanf(" %f", &salario);
    printf("informe seu estado civil com[S -> solteiro] e [C] -> casado: "); scanf(" %c", &est_civil);
    if(est_civil == 'C' || est_civil == 'c'){
        printf("Imposto: %.2f\n", salario * 0.09);
    }else if(est_civil == 'S' || est_civil == 's'){
        printf("Imposto: %.2f\n", salario * 0.10);


    }else{
        printf("Estado civil incorreto!");


    }
    */
    // exercicio pra saber se e maior usando o operador ternario
/*
    int a, b, result;
    printf("Informe o primeiro inteiro: "); scanf(" %d", &a);
    printf("Informe o segundo inteiro: "); scanf(" %d", &b);
    result = a > b ? a : b;
    printf("Maior = %d\n", result);
    */

/*
   int x;
   printf("informe um numero inteiro: "); scanf(" %d", &x);
   printf("seu numero e: %s\n",
          (x > 0 )? "Positivo":
          (x < 0)? " negativo":
          "igual a zero");
          */

          // switch
          /*
          char ch;
          printf("Digite um simbolo de pontuacao: "); scanf(" %c", &ch);
          switch( ch ){
              case '.' : printf("Ponto.\n"); break;
              case ',' : printf("Virgula.\n"); break;
              case ':' : printf("Dois pontos. \n"); break;
              case ';' : printf("ponto e virgula. \n"); break;
            default : printf("Nao eh pontuacao.\n");
          }
          */


          // exercios
          //Leia um número de 1 a 12 e use switch-case para imprimir o nome do mês correspondente.

          /*
          int mes;
          printf("Digite o numero do mes "); scanf(" %d", &mes);
          switch(mes){
          case 1:
              printf("Janeiro");
              break;
          case 2:
            printf("Fevereiro");
            break;
          case 3:
            printf("Marco");
            break;
          case 4:
            printf("Abril");
            break;
          case 5:
            printf("Maio");
            break;
          case 6:
            printf("Junho");
            break;
          case 7:
            printf("julho");
            break;
          case 8:
            printf("Agosto");
            break;
          case 9:
            printf("Setembro");
            break;
          case 10:
            printf("Outubro");
            break;
          case 11:
            printf("Novembro");
            break;
          case 12:
            printf("Dezembro");
            break;
            default : printf("Mes nao encontrado");

          }

          */

          // Leia dois números inteiros e uma operação (+, -, *, /) do usuário e use switch-case para realizar o cálculo.

          /*
          int x, y;
          char ope;
          printf(" Digite o primeiro numero: "); scanf(" %d", &x);
          printf("Digite os segundo numero: "); scanf(" %d", &y);
          printf("Escola a operacao: +, -, *, /"); scanf(" %c", &ope);
          switch(ope){
          case '+':
            printf("resultado = %d\n", x + y);
            break;
          case '-':
            printf("resultado = %d\n", x - y);
            break;
          case '*':
            printf("resultado = %d\n", x * y);
            break;
          case '/':
            printf("resultado = %d\n", x / y);
            break;
          default:
            printf("Operacao nao encontrada");

          }
          */
          // escreva um programa de formas distintas, que leia um inteiro e indique se esse inteiro é ou nao igual a zero

          /*
          int x;
          printf("Digite um inteiro: "); scanf(" %d", &x);
          if(x == 0){
            printf("numero igual a zero");
          } else{
              printf("Inteiro n e igual a zero");
          }
          */
          // reeescrevendo o programa usando switch
          /*
          int x;
          printf("Digite um numero inteiro: ");
          scanf(" %d", &x);
          switch(x == 0){
          case 1:
            printf("X igual a zero\n");
            break;

          case 0:
            printf("x nao eh igual a zero");
            break;

          }
          */

          char mes;

          printf("digite um mes do ano: "); scanf(" %c", &mes);
          switch(mes){
          case 'j':
            printf("janeiro = 31 dias");
            break;
          case 'f':
            printf("fevereiro = 28 dias");
          case 'm':
            printf("Marco = 30 dias");
            break;
          case 'a':
            printf("Abril = 30 dias ");
            break;
          case 'M':
            printf("Maio = 31 dias");
            break;










        default: printf("por favor digite um mes correto");





          }




















    return 0;
}
