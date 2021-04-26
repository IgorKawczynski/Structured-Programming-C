#include <stdio.h>
#include <stdlib.h>

void wsk(int n, int *w){

    *w=n;


}


int main()
{

    int x;
    printf("Podaj x\n");
    scanf("%d", &x);
    int y;
    printf("Podaj y\n");
    scanf("%d", &y);
    printf("PO PRZEPISANIU X do Y :\n");
    wsk(x, &y);
    printf("X=%d | Y=%d:\n", x, y);

    return 0;
}
