#include <stdio.h>
#include <stdlib.h>

int NWD(int a, int b){

    int c;
    while(b!=0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    return a;
}

int SUMA(unsigned int n){

    int suma=0;
    if(n==0)
        return 0;
    if(n==1)
        return 0;
    for(int i=0;i<n;i++)
    {
        if(NWD(i, n)==1)
            suma=suma+i;

    }
    return suma;



}

int main()
{
    printf("Program obliczajacy NWD\n");
    int a;
    printf("Wypisz a :\n");
    scanf("%d", &a);
    int b;
    printf("Wypisz b :\n");
    scanf("%d", &b);

    printf("NWD(a,b) =  %d\n", NWD(a, b));

    printf("Program obliczajacy Sume liczb mniejszych od n i wzglednych od n\n");
    int n;
    printf("Wypisz n :\n");
    scanf("%d", &n);

    printf("SUMA z elementow mniejszych od n bedacych wzglednych od n to : %d", SUMA(n));

    return 0;
}
