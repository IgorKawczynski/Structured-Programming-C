#include <stdio.h>
#include <stdlib.h>

int wsk(const int *x, const int *y){

    int suma=0;
    suma = *x + *y;
    return suma;

}



int main()
{

    int x;
    printf("Podaj x\n");
    scanf("%d", &x);
    int y;
    printf("Podaj y\n");
    scanf("%d", &y);
    printf("SUMA Z X i Y : %d\n", wsk(&x, &y));

    return 0;
}
