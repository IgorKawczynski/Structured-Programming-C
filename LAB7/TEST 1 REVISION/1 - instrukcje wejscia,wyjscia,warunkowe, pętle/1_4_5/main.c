#include <stdio.h>
#include <stdlib.h>



int main()
{
    unsigned int n;
    printf("Wypisz n\n");
    scanf("%u", &n);
    int sumakwadratow=0;
    for(int i=0; i<=n; i++)
    {

        sumakwadratow = sumakwadratow + i*i;
    }


    printf("%d", sumakwadratow);
    return 0;
}
