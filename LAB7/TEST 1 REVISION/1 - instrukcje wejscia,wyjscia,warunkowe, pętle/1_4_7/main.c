#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n;
    printf("Wypisz n\n");
    scanf("%u", &n);
    unsigned int m;
    printf("Wypisz m, ktore jest wieksze od n\n");
    scanf("%u", &m);
    int produkt=1;
    if(m>n)
    {
        for(int i=n; i<=m; i++)
        {
            produkt = produkt * i;

        }

    }
    printf("%d", produkt);


    return 0;
}
