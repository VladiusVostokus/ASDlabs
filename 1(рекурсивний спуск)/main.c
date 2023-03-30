#include <stdio.h>
#include <stdlib.h>


float recursion(float x, int i,float F_i) {

    if (i == 1)
        return F_i;

    else {

        F_i += -F_i * (2*x / 3 - 1);
        recursion(x, i-1, F_i);

    }

}

int main()
{
    float res = recursion(1,5,1);
    printf("%f",res);

    return 0;
}
