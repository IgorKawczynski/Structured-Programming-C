#include <stdio.h>
#include <stdlib.h>

struct Structure {

    int field1;
    int field2;
};

void foo1(struct Structure zmiennaS){

    zmiennaS.field1=43; // to nie zmieni, bo to zmienna lokalna, trzeba uzyc wskaznika, ponizej
}


void foo2(struct Structure *zmiennaS){

    zmiennaS->field1=43; //tu zmieni, gdyz przekazujemy adres

}

int main()
{
    struct Structure zmiennaS={4, 5};
    foo1(zmiennaS);
    printf("%d\n\n", zmiennaS.field1);
    foo2(&zmiennaS);
    printf("%d\n\n", zmiennaS.field1);



    printf("Hello world!\n");
    return 0;
}
