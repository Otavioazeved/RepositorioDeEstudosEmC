#include <stdio.h>
#include <stdlib.h>

//Escreva uma fun��o que receba um n�mero e retorne o triplo dele.

/*int triplo(int n){
    return n * 3;

}
*/
// fun��o para calcular a soma de dois numeros inteiros

int somarDoisInteiros(int a, int b){
    return a + b;
}

int main()
{
    /*int v;
    printf("Digite um numero: ");
    scanf("%d", &v);
    int result = triplo(v);
    printf("o triplo de um numero n e: %d\n", result);
    */

    int v, y;
    printf("Digite dois valores inteiros: ");
     scanf("%d%d", &v, &y);
    int result = somarDoisInteiros(v, y);
    printf("A soma e: %d\n", result);



    return 0;
}
