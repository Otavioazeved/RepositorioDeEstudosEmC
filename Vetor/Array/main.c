#include <stdio.h>
#include <string.h> // Necessário para a função strlen()

int main() {
    // String a ser analisada
    char stc[20] = "Linguagem baixa";
    int i, total = 0;

    int tam1 = strlen(stc);

    // Loop para percorrer cada caractere da string
    for (i = 0; i < tam1; i++) {
        // Condição 'if' completa, verificando todas as vogais (minúsculas e maiúsculas)
        if (stc[i] == 'a' || stc[i] == 'e' || stc[i] == 'i' || stc[i] == 'o' || stc[i] == 'u' ||
            stc[i] == 'A' || stc[i] == 'E' || stc[i] == 'I' || stc[i] == 'O' || stc[i] == 'U') {
            total++;
        }
    }

    // A linha do printf foi movida para dentro da função main, antes do return.
    printf("Nro vogais = %d\n", total); // A saída será 7

    return 0;
}
