#include <stdio.h>
#include <stdlib.h>

void foo(int a,int b)
{
    int d= (b+=4)-(a*=2); // a=2  , b=2  , d=0
    a=(d^=2); // a=2  , b=2 , d=2
    d=(b/=4)*(a-=3); // a=-1  , b=0  , d=0
}

int main()
{
    //wpisz wartosci zmiennych po wykonaniu danej linijki kodu
    int a = 162423; //tu wpisz swoj numer indeksu
    int b=a%9;
    int c=b%4;
    foo(b+1,c-2);
    return 0;
}
