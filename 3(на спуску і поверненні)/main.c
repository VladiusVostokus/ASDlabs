#include <stdio.h>
#include <stdlib.h>

float recursion_return(float x, unsigned int i,float F_i);
float sum_descent(float x, unsigned int i, float F_i);



int main()
{
    float last_member = recursion_return(1.1, 5, 1);
    printf("Last member = %f\n",last_member);

    float result = sum_descent(1.1, 5, 1);
    printf("Sum = %f\n",result);

    return 0;
}


float recursion_return(float x, unsigned int i,float F_i) {

    if (i == 1) {
        return F_i;
    }

    else {

        F_i = -F_i * (2*x / 3 - 1);
        recursion_return(x, i-1, F_i);

    }
}

float sum_descent(float x, unsigned int i, float F_i) {

    float sum = F_i;

    if (i == 1)
        return sum;

    else
        sum = sum_descent(1.1, i - 1, F_i) + recursion_return(1.1, i, F_i);
}
