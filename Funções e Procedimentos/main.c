#include <stdio.h>
#include <stdlib.h>

//Escreva uma fun��o que receba um n�mero e retorne o triplo dele.

int triplo(int n){
    return n * 3;

}

int main()
{
    int v;
    printf("Digite um numero: ");
    scanf("%d", &v);
    int result = triplo(v);
    printf("o triplo de um numero n e: %d\n", result);

    return 0;
}
