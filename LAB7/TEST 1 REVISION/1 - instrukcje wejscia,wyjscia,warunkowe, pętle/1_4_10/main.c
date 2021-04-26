#include <stdio.h>
#include <stdlib.h>


int main()
{
    unsigned int n;
    printf("Wypisz n\n");
    scanf("%u", &n);
    int wynik = 0;
    for(int i=0; i*i<=n; i++)
    {
        wynik = i;

    }
    printf("Pierwiastek tej liczby to :  %d\n", wynik);
    // AAAAAAAAAAAAAALLLLLLLLLBOOOOOOOOOOOOOOOOOOOOOO
    wynik = pow(n, 0.5);
    printf("Pierwiastek tej liczby to :  %d\n", wynik);

    return 0;
}
