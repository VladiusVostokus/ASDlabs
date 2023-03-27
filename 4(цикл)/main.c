#include <stdio.h>
#include <stdlib.h>

float recursion_alg()
{
    int n; float F_i = 1.0; float x;

    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter x: ");
    scanf("%f",&x);

    if (n != 1){

        for (int i = 1; i < n; i++) {

            F_i += -F_i * (2*x / 3 - 1);

        }
    }

    return F_i;
}

int main()
{
    float result = recursion_alg();
    printf("F_i = %f",result);

    return 0;
}

