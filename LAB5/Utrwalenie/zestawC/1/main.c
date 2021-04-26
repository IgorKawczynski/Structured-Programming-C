#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double foo1(double arg1){

    return arg1*arg1;

}

double foo2(double arg2){

    return arg2;

}


int foo(double(*foo1)(double arg1), double(*foo2)(double arg2), double x){

    int licz=0;
    if(x<1)
        return -1;

    for(int i=1;i<=x;i++)
    {
        if(fabs(foo1(i)-(foo2(i)*foo2(i)*foo2(i)))<0.00001)
            licz = licz + 1;
    }
    if(licz==x)
        return 1;
    else
        return -1;



}


int main()
{


    printf("%d\n", foo(foo1, foo2, 3));
    printf("%d\n", foo(foo1, foo2, 1));
    printf("%d\n", foo(foo1, foo2, 0));

    return 0;
}
