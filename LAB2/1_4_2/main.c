#include <stdio.h>
#include <stdlib.h>


int main()
{
        unsigned int n;
        printf("Wypisz n\n");
        scanf("%u", &n);
        unsigned int m;
        printf("Wypisz m\n");
        scanf("%u", &m);
        for(int i=0;i<m;i++)
        {
            printf("%u\n", i*n);
        }



    return 0;
}
