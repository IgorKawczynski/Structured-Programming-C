#include <stdio.h>
#include <stdlib.h>

void zamiana(int *a, int *b){

    int temp=*a;           //temporary -- zmienna tymczasowa
    *a=*b;
    *b=temp;

}



int main()
{
    int x=52;
    int y=9;
    printf("%d %d\n", x, y);
    zamiana(&x, &y);
    printf("%d %d ZAMIANA", x, y);

    return 0;
}
