#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int lewa_a;
    int lewa_b;
    int lewa_c;

    int a;
    printf("Wypisz a\n");
    scanf("%d", &a);
    int b;
    printf("Wypisz b\n");
    scanf("%d", &b);
    int c;
    printf("Wypisz c\n");
    scanf("%d", &c);
    int d;
    printf("Wypisz d\n");
    scanf("%u", &d);

    //A
    for(x=0; lewa_a<d; x++)
    {
        lewa_a = abs(a) * (x*x) + (b*x) + c;

    }
    if(x>0)x--;
    printf("dla a) : x = %d\n", x);

    //B
    for(x=0; lewa_b<c; x++)
    {
        lewa_b = 5 * (x*x) + (a*x) + b;

    }
    if(x>0)x--;
    printf("dla b) : x = %d\n", x);

    //C
    for(x=0; lewa_c<=c; x++)
    {
        lewa_c = abs(a) * (x*x) + (b*x) + c;

    }
    if(x>0)x--;
    printf("dla a) : x = %d\n", x);
    return 0;
}
