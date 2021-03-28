#include <stdio.h>
#include <stdlib.h>

static int wartosc=0;

int zwrot(int n){

    wartosc=n+wartosc;
    return wartosc;

}


int main()
{
    int x;
    scanf("%d", &x);
    printf("zwracana wartosc: %d\n", zwrot(x));
    int y;
    scanf("%d", &y);
    printf("zwracana wartosc: %d\n", zwrot(y));
    int z;
    scanf("%d", &z);
    printf("zwracana wartosc: %d\n", zwrot(z));

    return 0;
}
