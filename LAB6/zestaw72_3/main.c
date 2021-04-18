#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int function3(double (*function3_1)(double n), double (*function3_2)(double m), double x)
{
    double pom=1;
    if (x<1)return -1;
    for(int i=0; i<pom; i++)
    {
        if(fabs(function3_1(x)!=function3_2(x)*function3_2(x)*function3_2(x)))return -1;
    }

    return 1;
}

double test1(double n)
{
    return n;
}

double test2(double n)
{
    return n*n*n;
}

int main()
{
    int n = 5;
    int n2 = 1;
    int n3 = -1;
    printf("%d\n", function3(test1, test2, n));
    printf("%d\n", function3(test1, test2, n2));
    printf("%d\n", function3(test1, test2, n3));
    return 0;
}
