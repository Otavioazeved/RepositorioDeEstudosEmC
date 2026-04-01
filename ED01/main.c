#include <stdio.h>
#include <stdlib.h>


int main()
{
    //  Arrays  //
    // tipo nome_array [tamanho], onde cada posicção do array é uma variavel



 /*
 Exercício básico (nível 1)

Crie um programa em C que:

Declare um array de 5 números inteiros
Use um for para:
pedir 5 números ao usuário
guardar no array
Use outro for para:
mostrar todos os números digitados


 */

   /* int numeros [5];
    int soma;
    float media = 0.0;
    for(int i = 0; i < 5; i++){
        printf("Digite o numero inteiro: ");
        scanf("%d", &numeros[i]);
    }

    printf("Os numeros digitados foram:\n ");


    for(int i = 0; i< 5; i++){
        printf("%d\n", numeros[i]);
    }


    for(int i = 0; i < 5; i++){
        soma += numeros[i];
    }
      printf("A soma de todos os numeros digitados foi: %d\n", soma);

    // media

    printf("A media dos numeros digitados: ");

    for(int i = 0; i<5; i++){
        media = (numeros[i] + soma) / 2;
        printf("%f\n", media);
    }
    */



// Matriz //

// tipo nome_array [nro_linhas] [nro_colunas]

  // Prencher a matriz
/*
int arr [5][5];
for(int i = 0; i<5; i++){
    for(int j = 0; j<5; j++){
         printf("Digite os numeros para completar a matriz:");
        scanf("%d",&arr[i][j]);
    }

}



    // Mostrar a matriz


for(int i = 0; i < 5; i++){
    for(int j = 0; j<5; j++){
        printf("%d", arr[i][j]);
    }

    printf("\n");

*/




// posso ja iniciar um array c valores, mas so posso fazer isso no momento de declaração e ai eu n preciso definir o tamnho dele, se eu ja colocar os valores


// somar os valores de um array




  /*int list [5];
 int soma = 0;
printf("Digite 5 valores inteiros: ");
 for(int i = 0; i<5; i++){
        scanf("%d", &list[i]);
        soma += list[i];


 }


 printf("A soma dos valores: %d\n", soma);

 // maior valor digitado


 for(int i = 0; i<5; i++){

 }
 */

 // strings
 // string na verdade é um array... char nome_array[tamanho] para identificar é %s


 /*char palavra[20];
 printf("digite uma palavra: ");
 scanf("%s", palavra);

 printf("Palavra lida: %s\n", palavra);


char nome2[20] = "Otavio";
printf("nome: %s\n", nome2);
*/


char palavra[20] = "teste";
printf("palavra: %s\n", palavra);
palavra[0] = 'l';
printf("novo nome: %s\n ", palavra);






    return 0;
}
