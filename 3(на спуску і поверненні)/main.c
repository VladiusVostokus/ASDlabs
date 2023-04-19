#include <stdio.h>
#include <stdlib.h>

float recursion(float x, unsigned int i,float F_i) {

    if (i == 1) {
        return F_i;
    }

    else {

        F_i = -F_i * (2*x / 3 - 1);
        recursion(x, i-1, F_i);

    }
}

float sum_count(float x, unsigned int i, float F_i) {

    float sum = F_i;

    if (i == 1)
        return sum;

    else
        sum = sum_count(1.1, i - 1, F_i) + recursion(1.1, i, F_i);
}

int main()
{
    float result = sum_count(1.1, 5, 1);
    printf("%f",result);

    return 0;
}
