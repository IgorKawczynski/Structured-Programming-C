#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{

    float x;
    float y;
    char znak;
    printf("Podaj operator dzialania \n");
    scanf("%c", &znak);
    printf("Podaj pierwsza liczbe :  \n");
    scanf("%f", &x);
    printf("Podaj druga liczbe :  \n");
    scanf("%f", &y);
    if(znak=='+')printf("Wynik dzialania to : %f ", x+y);
    if(znak=='-')printf("Wynik dzialania to : %f ", x-y);
    if(znak=='*')printf("Wynik dzialania to : %f ", x*y);
    if(znak=='/')printf("Wynik dzialania to : %f ", x/y);
    if(y==0)printf("U cannot divide by zero!");

    int tingtong = clock();
    printf("%f", (float)tingtong/CLOCKS_PER_SEC);

    return 0;
}
