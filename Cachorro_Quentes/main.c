#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, p;
    float m;
    printf("informe o numero de cachorros quentes consumidos: ");
    scanf("%d", &c);
    printf("informe o numero de participantes do evento: ");
    scanf("%d", &p);
    m = (float)c / p;
    printf("o numero medio de cachorro quentes consumidos foi de: %.2f", m);

    return 0;
}
