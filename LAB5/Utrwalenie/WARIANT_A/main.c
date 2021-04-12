#include <stdio.h>
#include <stdlib.h>

void zamiana(int *a, int *b){

    int temp=*a;
    *a=*b;
    *b=temp;

}



int main()
{
    int x;
    int y;
    scanf("%d\n%d", &x, &y);
    int a=x;
    int b=y;
    printf("%d, %d ---- PRZED ZAMIANA\n", a, b);
    zamiana(&a, &b);
    printf("%d, %d ---- PO ZAMIANIE", a, b);
    return 0;
}
