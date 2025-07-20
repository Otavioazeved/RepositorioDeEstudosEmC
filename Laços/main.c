#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
 int a, b;
 printf("Digite dois valores: "); scanf(" %d %d", &a, &b);
 while(a < b){
    printf(" %d\n", a);
 }
 */
 // imprimindo a tabuada do 5;
/*
 int n=1;
 while(n <=10){
    printf("5 * %2d = %2d\n", n, 5 * n);
    n++;
 }
 */

 #include <stdio.h>

int main() {
    int n, num = 1;

    while (num <= 5) {
        n = 1;

        while (n <= 10) {
            printf(" %2d * %2d = %2d\n", num, n, num * n);
            n++;
        }

        num++;
        putchar('\n');
    }

    return 0;
}




