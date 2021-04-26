#include <stdio.h>
#include <stdlib.h>

void wsk(int *x, int *y){

    if(*x>*y)
    {
        int temp=*x;
        *x=*y;
        *y=temp;
    }

}


int main()
{

    int x;
    printf("Podaj x\n");
    scanf("%d", &x);
    int y;
    printf("Podaj y\n");
    scanf("%d", &y);
    printf("PRZED ZAMIANA : x=%d | y=%d\n", x, y);
    wsk(&x, &y);
    printf("PO ZAMIANIE : x=%d | y=%d\n", x, y);

    return 0;
}
