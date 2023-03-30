#include <stdio.h>
#include <stdlib.h>


float recursion(float x, int i,float F_i) {

    float sum = 1;

    if (i == 1)

        sum = F_i;

    else {

        F_i += -F_i * (2*x / 3 - 1);
        sum = recursion(x, i-1, F_i);

    }

    return sum;

}

int main()
{
    float sum = recursion(1,5,1);
    printf("%f",sum);

    return 0;
}
