#include <stdio.h>
#include <stdlib.h>

int *min(int *a, int *b){
if(*a<*b)return a;

return b; //teraz zwracamy adres, nie wskaznik, nie wartosc
}



int main()
{
    int x=44;
    int y=7;

    printf("%d --- %p\n", x, &x);
    printf("%d --- %p\n", y, &y);
    printf("Mniejsza wartosc : %p", min(&x, &y));


    return 0;
}
