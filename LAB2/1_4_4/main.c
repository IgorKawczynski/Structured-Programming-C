#include <stdio.h>
#include <stdlib.h>

int silnia_rek(unsigned int n){

    if(n<1)
        return 0;
    if(n==1)
        return 1;
    return n * silnia_rek(n-1);



}

int main()
{
    unsigned int n;
    printf("Wypisz n\n");
    scanf("%u", &n);
    int silnia=1;
    for(int i=1; i<=n; i++)
    {
        silnia = silnia * i;
    }
     printf("%d\n", silnia);

     printf("Teraz rekurencja: \n");
     printf("%d\n", silnia_rek(n));


    return 0;
}
