#include <stdio.h>
#include <stdlib.h>

float recursion(float x, unsigned int i,float F_i) {


    if (i == 1) {
        return F_i;
    }

    else {

        F_i = -F_i * (2*x / 3 - 1);
        printf("F_i = %f\n",F_i);
        recursion(x, i-1, F_i);
    }

}

float sum_count(unsigned int n, unsigned int i,float x, float suma, float F_i) {

    float sum = 0;

    if (n == 1)
        return sum;

    else{
        sum += recursion(1.1, i - 1, F_i);
        sum_count(n-1,i-1, 1.1, sum, 1);
    }

}

int main()
{
    float result = sum_count(5, 5, 1.1 , 0,1);
    printf("%f",result);

    return 0;
}
