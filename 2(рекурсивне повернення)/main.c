#include <stdio.h>
#include <stdlib.h>


float recursion2(float x, unsigned int n) {

    float F_i;

    if (n == 1)
        F_i = 1;

    else {
        F_i = -recursion2(x, n-1) * (2*x/3 - 1);
        printf("F_i = %f\n", F_i);
    }

    return F_i;

}

int main()
{
    float res = recursion2(1.1 ,5);
    printf("%f",res);

    return 0;
}
