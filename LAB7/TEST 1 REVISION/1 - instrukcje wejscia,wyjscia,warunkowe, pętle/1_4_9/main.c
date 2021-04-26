#include <stdio.h>
#include <stdlib.h>



int main()
{
    printf("Program obliczajacy NWD\n");
    int a;
    printf("Wypisz a :\n");
    scanf("%d", &a);
    int b;
    printf("Wypisz b :\n");
    scanf("%d", &b);
    int c;
    while(b!=0)
    {
        c=a%b;
        a=b;
        b=c;

    }

    printf("NWD(a,b) =  %d\n", a);
    return 0;
}
