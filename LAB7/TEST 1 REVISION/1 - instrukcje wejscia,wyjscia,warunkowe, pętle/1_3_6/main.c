#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Uklad rownan\n");
    int x,x2,y,y2,w,wx,wy, jeden, dwa;
    printf("Podaj wspolczynnik pierwszej niewiadomej pierwszego rownania  : \n");
    scanf("%d", &x);
    printf("Podaj wspolczynnik drugiej niewiadomej pierwszego rownania : \n");
    scanf("%d", &y);
    printf("Podaj wyraz wolny pierwszego rownania : \n");
    scanf("%d", &jeden);
    printf("Podaj wspolczynnik pierwszej niewiadomej drugiego rownania : \n");
    scanf("%d", &x2);
    printf("Podaj wspolczynnik drugiej niewiadomej drugiego rownania : \n");
    scanf("%d", &y2);
    printf("Podaj wyraz wolny drugiego rownania : \n");
    scanf("%d", &dwa);
    w = (x*y2) - (y*x2);
    if(w!=0)
    {
        wx = (jeden*y2) - (y*dwa);
        wy = (x*dwa) - (jeden*x2);
        x=wx/w;
        y=wy/w;
        printf("Pierwsza niewiadoma jest rowna : %d\n", x);
        printf("Druga niewiadoma jest rowna : %d\n", y);
    }
    else
        printf("WYZNACZNIK JEST ROWNY 0");






    return 0;
}
