#include <stdio.h>
#include <stdlib.h>
int main() {
   char palavra [100];
   printf("DIgite uma palavra: ");
  fgets(palavra, 100, stdin);
   printf("Voce digitou a palavra: %s", palavra);

    return 0;
}
