#include <stdio.h>
#include <stdlib.h>

struct Test{

    int field1;
    char field2;
    //doble field3; // porownac po odkomentowaniu

};

struct t2{

    int field1;

};

struct t3{

    char field1;

};

struct t4{

    int field1;
    int field2;

};


struct TestPadding{

    char field1;
    double field2;
    int field3;


};

enum week{Mon, Tue, Wd, Thu, Fri, Sat, Sun};

int main()
{
    struct Test a={22, 'w'};
    printf("%d\n", a); //unexpected
    printf("%p\n", &a); //adres struktury, pierwszego pola
    printf("%p\n", &a.field1); //adres pierwszego pola
//  printf("%p\n", (&a).field1); //blad kompilacji
    printf("%p\n", &a.field2); //adres drugiego pola
//  printf("%d\n", *a); //brak kompilacji, dereferencja na samej zmiennej nie jest dostepna
    printf("%d\n", *(&a)); //unexpected
    printf("%d\n", a.field1); //wartosc pierwszego pola
    printf("%c\n", a.field2); //wartosc drugiego pola
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
    printf("%Iu\n", sizeof(struct t2));
    struct t2 zmienna2={5};
    printf("%Iu\n", sizeof(zmienna2));                  //4 bajty
    printf("%p\n", &zmienna2);
    printf("%p\n", &zmienna2.field1);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
    printf("%Iu\n", sizeof(struct t3));
    struct t3 zmienna3={'E'};
    printf("%Iu\n", sizeof(zmienna3));                  //1 bajt
    printf("%p\n", &zmienna3);
    printf("%p\n", &zmienna3.field1);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
    printf("%Iu\n", sizeof(struct t4));
    struct t4 zmienna4={5, 'R'};
    printf("%Iu\n", sizeof(zmienna4));                  //8 bajtow, bo 2zmienne*4bajty  (inty)
    printf("%p\n", &zmienna4);
    printf("%p\n", &zmienna4.field1);
    printf("%p\n", &zmienna4.field2);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
    printf("%Iu\n", sizeof(struct TestPadding));
    struct TestPadding zmienna5={'R', 5.6, 8 };
    printf("%Iu\n", sizeof(zmienna5));                  //24 bajty, bo char zajmie 8 bajtów ( padding ), 8 int, 8 double,
    printf("%p\n", &zmienna5);
    printf("%p\n", &zmienna5.field1);
    printf("%p\n", &zmienna5.field2);
    printf("%p\n", &zmienna5.field3);


    //typ wyliczeniowy
    enum week day;
    day = Fri;
    printf("%d\n", day);  //%d jest poprawne, otrzymamy indeks na ktorym stoi ,,Fri''

    printf("Hello world!\n");
    return 0;
}



