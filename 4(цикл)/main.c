#include <stdio.h>
#include <stdlib.h>

float cycle_recursion(unsigned int n, float x);
float approximation_func(float x);


int main()
{
    printf("Last member = %f\n",cycle_recursion(5,1.1));
    printf("approximation result = %f\n", approximation_func(1.1));

    return 0;
}

float cycle_recursion(unsigned int n, float x)
{
    float F_i = 1;
    float res = F_i;

    for (int i = 1; i < n; i++) {

        F_i = -F_i*(2*x / 3 - 1);
        res += F_i;

    }
    printf("Sum = %f\n", res);
    return F_i;
}

float approximation_func(float x) {

    return 1.5/x;
}
