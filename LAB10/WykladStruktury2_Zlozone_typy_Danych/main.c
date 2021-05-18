#include <stdio.h>
#include <stdlib.h>

struct Structure {

    int field1;
    int field2;
    char field3;
    char field4;
}zmiennaS = {60, 0.2, 'a', 'b'};




struct Structure2 {

    int field1;
    double field2;
    char field3;
};



int main()
{

    printf("Wartosc zmiennej -- %d\n", zmiennaS);
    printf("Adres zmiennej -- %p\n", &zmiennaS); //adres 1wszego elementu ostatecznie
    printf("Wartosc pola numer 1 -- %d\n", zmiennaS.field1);
    printf("Adres pola numer 1 -- %p\n", &zmiennaS.field1);
    printf("Wartosc pola numer 2 -- %d\n", zmiennaS.field2); // skok co 4 bajty (int), bo int zajmuje 4 bajty w pamiecii
    printf("Adres pola numer 2 -- %p\n", &zmiennaS.field2);
    printf("Wartosc pola numer 3 -- %c\n", zmiennaS.field3);
    printf("Adres pola numer 3 -- %p\n", &zmiennaS.field3);
    printf("Wartosc pola numer 4 -- %c\n", zmiennaS.field4); //skok co 1 bajt (char), bo char zajmuje 1 bajt w pamiecii
    printf("Adres pola numer 4 -- %p\n", &zmiennaS.field4);


    //tablice
    struct Structure2 tabS[3]={ {4, 7.2, 'q'}, {5, 8.2, 'e'}, {6, 9.2, 'r'} }; //zobacz debuggerem



    //i wskaznik
    struct Structure2 *wsk;
    struct Structure2 zmiennaS2 = {20, 3.4, 'w'};
    wsk = &zmiennaS2;
    printf("%d\n", (*wsk).field1);
    printf("%d\n", wsk->field1);
    printf("%c\n", (*wsk).field3);
    printf("%c\n", wsk->field3);  //strzalka wygodniejsza, nie trzeba uzywac nawiasu i gwiazdki
    return 0;
}
