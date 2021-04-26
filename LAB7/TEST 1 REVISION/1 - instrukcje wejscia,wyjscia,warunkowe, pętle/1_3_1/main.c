#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    scanf("%f", &x);
    if(x>=0)
        printf("%f\n", x);
    else
        printf("%f\n", fabs(x));
    return 0;
}
