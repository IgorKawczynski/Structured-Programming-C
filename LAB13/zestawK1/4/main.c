#include <stdio.h>
#include <stdlib.h>

int f1(float a){

    return a;

}

int f2(float b){

    return b+3;

}


int fun( int(*f1)(float a), int(*f2)(float b), int c ){

    return f1(c) + f2(c) + c;

}


int main()
{

    printf("%d \n", fun(f1, f2, 4));

    return 0;
}
