#include <stdio.h>
#include <stdlib.h>

float recursion2(float x, int n) {

    float F_i = 1;

    if (n == 1)

        recursion2(x, n-1);

    else {
        F_i += -F_i * (2*x / 3 - 1);
        return F_i;
    }

}

int main()
{
    float res = recursion2(1,5);
    printf("%f",res);
}
