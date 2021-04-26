#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int main()
{
    unsigned int n;
    printf("Wypisz n\n");
    scanf("%u", &n);
    unsigned int m;
    printf("Wypisz m\n");
    scanf("%u", &m);
    for(int i=0; i*n<m; i++)
    {
        printf("%u\n", i*n);

    }
    int tingtong=clock();
    printf("%f\n", (float)tingtong/CLOCKS_PER_SEC);

    return 0;
}
