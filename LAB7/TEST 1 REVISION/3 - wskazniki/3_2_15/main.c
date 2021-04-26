#include <stdio.h>
#include <stdlib.h>

void przepis(const int *x, int *y){

    *y=*x;


}



int main()
{
    int x;
    printf("Podaj x : \n");
    scanf("%d", &x);
    int y;
    printf("Podaj y : \n");
    scanf("%d", &y);
    printf("Przed przepisaniem x=%d  ,  y=%d\n", x, y);
    przepis(&x, &y);
    printf("PO przepisaniu x=%d  ,  y=%d\n", x, y);
    return 0;
}
