#include <stdio.h>
#include <stdlib.h>

float recursion2(float x, unsigned int n, float F_i) {


    if (n == 1) return F_i;


    else
        F_i = -F_i * (2*x / 3 - 1) + recursion2(x, n-1, F_i);





}

int main()
{
    float res = recursion2(1,5,1);
    printf("%f",res);

    return 0;
}
