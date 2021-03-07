#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    printf("podaj dwie liczby ( moga byc ujemne ), a program wypisze liczbe, ktorej wartosc bezwzgledna jest wieksza od drugiej\n");
    scanf("%d\n%d", &x, &y);
    if(fabs(x)>=fabs(y)) {
        printf("%d", x);
    } else {
    printf("%d", y);
    }

    return 0;
}
