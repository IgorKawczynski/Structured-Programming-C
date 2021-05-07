#include <stdio.h>
#include <stdlib.h>

int main()
{
    int podzprzez6;
    int podzprzez14;
    int podzprzez6i14;
    for(int i=1; i<=600; i++)
    {
        if(i%6==0)
            podzprzez6=podzprzez6+1;
        if(i%14==0)
            podzprzez14=podzprzez14+1;
        if(i%6==0 || i%14==0)
            podzprzez6i14=podzprzez6i14+1;

    }


    printf("Podz przez 6 : %d, Podz przez 14 : %d, Podz przez 6 i 16 : %d\n", podzprzez6, podzprzez14, podzprzez6i14);
    return 0;
}
