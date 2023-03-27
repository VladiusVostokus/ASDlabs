#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,x; double Fi;
    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter x: ");
    scanf("%d",&x);

    if (n == 1) Fi = 1;

    else {

        Fi = 1;

        for (int i = 1; i <= n; i++) {

            Fi += -Fi * (2*x / 3 - 1);

        }

    }

    printf("Fi = %.5f\n",Fi);

    return 0;
}

