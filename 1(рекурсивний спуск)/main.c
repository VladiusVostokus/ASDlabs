#include <stdio.h>
#include <stdlib.h>

float recursion_descent(float x, unsigned int i,float F_i, float sum);


int main()
{
    float result = recursion_descent(1.1, 5, 1, 0);
    printf("Last member = %f\n",result);

    return 0;
}

float recursion_descent(float x, unsigned int i,float F_i, float sum) {

    sum += F_i;

    if (i == 1){

        printf("Sum = %f\n",sum);
        return F_i;
    }

    else {

        F_i = -F_i * (2*x / 3 - 1);
        recursion_descent(x, i-1, F_i,sum);
    }

}
