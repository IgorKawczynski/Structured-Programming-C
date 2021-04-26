#include <stdio.h>
#include <stdlib.h>

int iloczynparz_rek(int x){

    if(x<2)
        return 1;
    if(x%2==0)
        return x * iloczynparz_rek(x-2);
    if(x%2!=0)
        return iloczynparz_rek(x-1);

}

int main()
{
    unsigned int n;
    printf("Wypisz n\n");
    scanf("%u", &n);
    int iloczynparz=1;
    if(n>2)
    {
        for(int i=2; i<=n; i++)
        {
            if(i%2==0)
            {
                iloczynparz = iloczynparz * i;

            }
        }
    }
    printf("%d\n", iloczynparz);

    printf("TERAZ REKURENCJA : \n");
    printf("%d", iloczynparz_rek(n));

    return 0;
}
