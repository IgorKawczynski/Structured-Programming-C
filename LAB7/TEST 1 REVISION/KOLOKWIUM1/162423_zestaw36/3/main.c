#include <stdio.h>
#include <stdlib.h>

int f(int x, int y){

    return x*y;

}

int foo(int(*f)(int x, int y), int n){

    return f(n, -n);

}


int main()
{


    printf("%d\n", foo(f, 2));
    printf("%d\n", foo(f, 0));

    return 0;
}
