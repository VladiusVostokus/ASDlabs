#include <stdio.h>
#include <stdlib.h>

float recursion_alg(unsigned int n, float x)
{
    float res = 1; float F_i = 1;

    for (int i = 1; i < n; i++) {

        F_i = -F_i*(2*x / 3 - 1);
        res += F_i;
        printf("F_i = %f res = %f\n",F_i,res);
    }
    return F_i;
}

float approximation_func(float x) {
    return 1.5/x;
}



int main()
{
    printf("F_i = %f\n",recursion_alg(5,1.1));

    printf("approximation result = %f\n", approximation_func(1.1));

    return 0;
}

