#include <stdio.h>
#include <stdlib.h>

int main()
{
int m [3] [3] ={1,2,3,
                4,5,6,
                7,8,9};
                int i, j, s = 0;
                for(i = 0; i<3; i++){
                    for(j = 0; j<3; i++){
                        if(j == 2 - i)

                            s += m [i][i] * m[i][j];
                                printf("%d", s);
                    }

                }


    return 0;
}
