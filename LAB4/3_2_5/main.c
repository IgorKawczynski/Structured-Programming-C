#include <stdio.h>
#include <stdlib.h>

int suma(const int *x, const int *y){

    int wynik;
    wynik=*x+*y;
    return wynik;

}


int main()
{
    const int x;
    const int y;
    scanf("%d\n%d", &x, &y);
    printf("%d", suma(&x, &y));
    return 0;
}
