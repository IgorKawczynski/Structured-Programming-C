#include <stdio.h>
#include <stdlib.h>

struct trojkat{

    double a;
    double b;
    double c;

};

void foo(struct trojkat t1, struct trojkat *t2){

    *t2=t1;

}

void wypisz(struct trojkat t1){

    printf("Pierwszy bok : %lf\n", t1.a);
    printf("Drugi bok : %lf\n", t1.b);
    printf("Trzeci bok : %lf\n\n", t1.c);

}

int main()
{
    struct trojkat t1;
    t1.a=3;
    t1.b=4;
    t1.c=6;
    wypisz(t1);
    struct trojkat t2;
    t2.a=2;
    t2.b=2;
    t2.c=2;
    wypisz(t2);
    struct trojkat *wsk1=&t2;
    foo(t1, wsk1);
    printf("Po przepisaniu : \n");
    wypisz(t1);
    wypisz(t2); // wypisz(*wsk1);

    printf("Hello world!\n");
    return 0;
}
