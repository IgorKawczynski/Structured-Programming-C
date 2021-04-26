#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned int n;
    printf("Wypisz n\n");
    scanf("%u", &n);
    int silnia = 1;
    int suma = 0;
    for(int i=1; i<=n; i++)
    {
        silnia = silnia * i;
        suma = suma + silnia;

    }
    printf("Silnia z tej liczby to : %d\n", silnia);
    printf("Suma silnii z tej liczby to : %d\n", suma);

    return 0;
}
