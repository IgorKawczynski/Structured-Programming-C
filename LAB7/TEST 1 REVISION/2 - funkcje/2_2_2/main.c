#include <stdio.h>
#include <stdlib.h>

int silnia(unsigned int n){

    int wynik=1;
    for(int i=1; i<=n; i++)
    {
        wynik = wynik * i;

    }
    return wynik;

}

int main()
{
    int n;
    scanf("%d", &n);
    printf("Silnia z n : %d\n", silnia(n));
    printf("Hello world!\n");
    return 0;
}
