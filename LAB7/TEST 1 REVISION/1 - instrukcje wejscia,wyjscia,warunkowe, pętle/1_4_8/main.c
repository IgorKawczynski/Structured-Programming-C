#include <stdio.h>
#include <stdlib.h>

int fibonacci_rek(int n){

    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fibonacci_rek(n-1)+fibonacci_rek(n-2);

}

int main()
{
    unsigned int n;
    printf("Wypisz n\n");
    scanf("%u", &n);
    int fprevious = 0;
    int factual = 1;
    for(int i=1;i<n;i++)
    {
        factual=factual+fprevious;
        fprevious=factual-fprevious;

    }
    printf("%d\n\n", factual);
    printf("TERAZ REKURENCJA : \n");
    printf("%d\n", fibonacci_rek(n));

    return 0;
}
