#include <stdio.h>
#include <stdlib.h>

int recursion_alg()
{
    int n; double F_i = 1; float x;

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
    double result = recursion_alg();

    printf("F_i = %.5f",result);

    return 0;
}

