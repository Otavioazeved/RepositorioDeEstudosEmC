#include <stdio.h>
#include <stdlib.h>
#include <string.h>





struct pessoa{
    char nome[50], rua[50];
    int idade, numero;

};
int main()
{
    // Struct
  /* struct pessoa p = {" Ricardo", "Rua 1", 31, 101};

   printf("pessoa eh: %s\n %d\n", p.nome, p.idade);

*/

// array de struct

struct pessoa p[4];
p[0].idade = 31;
p[2].numero  = p[0].numero -1;

printf("A idade e o numero eh: %d\n", p[0].idade, p[0].numero);



    return 0;
}
