#include <stdio.h>
#include <stdlib.h>

double foo1(double arg1){

    return arg1;

}

double foo2(double arg2){

    return arg2;

}

int foo(double(*foo1)(double arg1), double(*foo2)(double arg2), double x){

    if(x<1)
        return -1;
    for(int i=0;i<=x;i++)
    {
        if(foo1(i)!=(foo2(i)*foo2(i)*foo2(i)))
            return -1;
    }
    return 1;



}


int main()
{

    printf("%d\n", foo(foo1, foo2, 1));
    printf("%d\n", foo(foo1, foo2, 5));
    return 0;
}
