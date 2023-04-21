#include <stdio.h>
#include <stdlib.h>

float recursion_return(float x, unsigned int n, float *sum);


int main()
{
    float sum = 0;
    float res = recursion_return(1.1 ,5, &sum);

    printf("Last member = %f\n",res);
    printf("Sum = %f\n",sum);

    return 0;
}

float recursion_return(float x, unsigned int n, float *sum) {

    float F_i;

    if (n == 1)
        F_i = 1;

    else
        F_i = -recursion_return(x, n-1, sum) * (2*x/3 - 1);

    *sum += F_i;

    return F_i;
}



