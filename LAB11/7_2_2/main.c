#include <stdio.h>
#include <stdlib.h>

struct trojkat{

    double a;
    double b;
    double c;

};

void przepisz(struct trojkat troj1, struct trojkat* troj2)
{
    *troj2=troj1;

}

void wyswietl(struct trojkat t1)
{
    printf("BOK 1 : %lf \n", t1.a);
    printf("BOK 2 : %lf \n", t1.b);
    printf("BOK 3 : %lf \n ------- \n", t1.c);
}

int main()
{
    struct trojkat t12 = {3, 4, 5};
    printf("Trojkat nr1 : \n");
    wyswietl(t12);

    struct trojkat t13 = {5, 6, 9};
    printf("Trojkat nr2 : \n");
    wyswietl(t13);

    przepisz(t12, &t13);
    printf("Trojkat nr2 po przepisaniu : \n");
    wyswietl(t13);

    struct trojkat t55[4] = { {3,4,5}, {5,12,13}, {6,6,6}, {5,6,9} };
    for(int i=0; i<4; i++)
    {
        wyswietl(t55[i]);
    }


    return 0;
}
