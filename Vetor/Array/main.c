#include <stdio.h>
#include <string.h> // Necess�rio para a fun��o strlen()

int main() {
    // String a ser analisada
    char stc[20] = "Linguagem baixa";
    int i, total = 0;

    int tam1 = strlen(stc);

    // Loop para percorrer cada caractere da string
    for (i = 0; i < tam1; i++) {
        // Condi��o 'if' completa, verificando todas as vogais (min�sculas e mai�sculas)
        if (stc[i] == 'a' || stc[i] == 'e' || stc[i] == 'i' || stc[i] == 'o' || stc[i] == 'u' ||
            stc[i] == 'A' || stc[i] == 'E' || stc[i] == 'I' || stc[i] == 'O' || stc[i] == 'U') {
            total++;
        }
    }

    // A linha do printf foi movida para dentro da fun��o main, antes do return.
    printf("Nro vogais = %d\n", total); // A sa�da ser� 7

    return 0;
}
