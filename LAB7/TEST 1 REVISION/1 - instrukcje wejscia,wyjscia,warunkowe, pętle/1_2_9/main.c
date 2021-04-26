#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x;
    scanf("%f", &x);
    if(x>=0)
    {
        float y = 0.5;
        float pierwiastek=0;
        pierwiastek = pow(x, y);
        printf("%f\n", pierwiastek);
        printf("%f\n", sqrt(x));
    }
    else
        printf("LICZBA MA BYC NIEUJEMNA");

    return 0;
}
