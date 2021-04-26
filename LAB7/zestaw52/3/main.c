#include <stdio.h>
#include <stdlib.h>

double *foo(){

    double *wsk=malloc(2*sizeof(double));
    *(wsk)=5.2;
    *(wsk+1)=-4.2;
    return wsk;



}



int main()
{

    printf("1ELEMENT : adres :%p    wartosc :%lf\n", foo(), *foo());
    printf("2ELEMENT : adres :%p    wartosc :%lf\n", foo()+1, *(foo()+1));
    printf("Hello world!\n");
    return 0;
}
