#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct trojkat{

    double a;
    double b;
    double c;

};

struct trojkat2{

    double a2;
    double b2;
    double c2;

};

double obwod(struct trojkat t){

    return t.a+t.b+t.c;

}


double pole(struct trojkat t){


    double p=0.5*(obwod(t));
    return sqrt(p*(p-t.a)*(p-t.b)*(p-t.c));

}

int czy_trojkat(struct trojkat t){


    if(t.a>0 && t.b>0 && t.c>0)
        if((t.a+t.b>t.c) && (t.a+t.c>t.b) && (t.c+t.b>t.a))
            return 1;
    return 0;
}


int main()
{
    struct trojkat t1;
    t1.a=3;
    t1.b=4;
    t1.c=6;
    printf("Obwod trojkata jest rowny : %lf\n", obwod(t1));
    printf("Pole trojkata jest rowne : %lf\n", pole(t1));
    printf("Czy mozna zbudowac trojkat? : %d\n", czy_trojkat(t1));
    struct trojkat t2;
    t2.a=3;
    t2.b=4;
    t2.c=9;
    printf("\nObwod trojkata2 jest rowny : %lf\n", obwod(t2));
    printf("Pole trojkata2 jest rowne : %lf\n", pole(t2));
    printf("Czy mozna zbudowac trojkat2? : %d\n", czy_trojkat(t2));

    return 0;
}
