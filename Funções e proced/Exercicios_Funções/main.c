#include <stdio.h>
#include <stdlib.h>

float Max(float x, float y, float w){
    if(x >= y && x >= w){
        return x;
    }else if(y >= x && y >= w ){
        return y;
    }else{
       return w;
    }
}
int main()
{
   float i, b , a;
   float result;
   printf("digite 3 valores e descubra o maior deles: ");
   scanf("%f %f %f", &i, &b, &a);
   result = Max(i, a, b);
   printf("O maior valor  e: %f\n ", result);
    return 0;
}
