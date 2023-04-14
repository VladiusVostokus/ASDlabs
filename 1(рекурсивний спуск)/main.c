#include <stdio.h>
#include <stdlib.h>


float recursion(float x, unsigned int i,float F_i, float sum) {

    sum += F_i;
    printf("res = %f ",sum);

    if (i == 1){
        return F_i;
    }

    else {

        F_i = -F_i * (2*x / 3 - 1);
        printf("F_i = %f\n",F_i);
        recursion(x, i-1, F_i,sum);
    }

}

int main()
{
    float result = recursion(1.1, 5, 1, 0);
    printf("%f",result);

    return 0;
}
