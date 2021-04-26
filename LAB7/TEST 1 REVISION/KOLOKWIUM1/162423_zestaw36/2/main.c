#include <stdio.h>
#include <stdlib.h>

int foo1(unsigned int n){

    int suma=0;
    for(int i=1;i<n;i++)
    {
        if((i%5==0) || (i%7==0))
            suma=suma+i;


    }
    return suma;

}

int main()
{

    printf("%d\n", foo1(21));
    printf("%d\n", foo1(5));
    printf("%d\n", foo1(22));
    printf("%d\n", foo1(0));

    return 0;
}
