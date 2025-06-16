#include <stdio.h>
#include <stdlib.h>

int main()
{
int n, a, b;
printf("informe o n de  tempo que falta p exped terminar: ");
scanf("%d", &n);
printf("informe o quan tempo p fazer o presente a: ");
scanf("%d", &a);
printf("informe do b:");
scanf("%d", &b);
if(n >= a && n >= b)
    printf("farei hoje!");
else
    printf("deixa pra amanha!");

    return 0;
}
