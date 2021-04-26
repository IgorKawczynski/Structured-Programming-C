#include <stdio.h>
#include <stdlib.h>

int *wsk(int *x, int *y){

    if(*x>*y)
        return y;
    return x;

}

int main()
{
    int x;
    scanf("%d", &x);
    int y;
    scanf("%d", &y);

    printf("%p\n", wsk(&x, &y));

    return 0;
}
