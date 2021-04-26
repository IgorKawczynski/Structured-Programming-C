#include <stdio.h>
#include <stdlib.h>

int pierwiastek(unsigned int n){

    int wynik=0;
    if(n==0)
        return 0;
    for(int i=0;i*i<=n;i++)
    {
        wynik=i;
    }
    return wynik;
}

int suma(unsigned int n){

    int wynik=0;
    for(int i=0; i<=n; i++)
    {
        wynik = wynik + pierwiastek(i);

    }
    return wynik;

}

int main()
{

    int n;
    scanf("%d", &n);
    printf("Pierwiastek z n to : \n");
    printf("%d\n", pierwiastek(n));
    printf("Suma z pierwiastkow do n to : \n");
    printf("%d\n", suma(n));
    return 0;
}
