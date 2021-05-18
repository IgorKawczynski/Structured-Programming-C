#include <stdio.h>
#include <stdlib.h>

struct Structure {

    int field1;

};
//FUNKCJA Z TABLICA NA STRUKTURZE
//zwraca najmniejszy element z tablicy
int foo(int n, struct Structure tab1[]){

    int temp=tab1[0].field1;
    for(int i=1; i<n; i++)
    {
        if(temp>tab1[i].field1)
            temp=tab1[i].field1;

    }
    return temp;
}


int main()
{

    struct Structure zmiennaS = {4};
    struct Structure zmiennaS2 = {-6};
    struct Structure zmiennaS3 = {23};
    struct Structure tab1[]={zmiennaS, zmiennaS2, zmiennaS3};

    printf("%d\n", foo(3, tab1));
    return 0;
}



//Dodatkowe typy danych ::

//UNIA (wrzuca wszystko do jednego bloku pamiecii, wszystko chowa do jednej pamiecii)

union Nazwa {

    int field1;
    char field2;
    /* ........ */
};
//odwolywanie sie takie same jak w strukturze

//Wyliczenia (z gory okreslone wartosci, ciagi, itp)

enum Nazwa {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};


//Typedef (pozwala tworzyc nowe nazwy typow)

typedef struct {

    int field1;

}Structure;

Structure s1;
