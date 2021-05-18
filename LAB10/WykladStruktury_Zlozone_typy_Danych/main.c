#include <stdio.h>
#include <stdlib.h>


//Sk£adnia
struct Structure {

    int field1; //pole1
    float field2;
    char field3;

};  //musi byc srednik na koncu



//Albo mozemy stworzyc strukture w ten sposob ( tworzymy od razu zmienne globalna tej struktury )
//dzieki temu mozemy uzyc tej zmiennej globalnej w funkcjach przykladowo
struct my_structure {

    int field1;
    float field2;
    char field3;

}my = {61, 46.54, 'c'};  //tutaj jest zmienna globalna, mozemy tez w ten sposob zdeklarowac zmienna a nie jak ponizej zmienne lokalne




int main()
{

    struct Structure zmiennaS; // struct Structure to typ zmiennej - zmiennaS to nazwa zmiennej, zlozony typ danych, dwuczesciowa nazwa
    zmiennaS.field1 = 60;
    zmiennaS.field2 = 45.64;
    zmiennaS.field3 = 'a';
    printf("%d   %f   %c\n", zmiennaS.field1, zmiennaS.field2, zmiennaS.field3);

    //ALBO :
    struct Structure zmiennaS2 = {600, 456.4, 'b'};
    printf("%d   %f   %c\n", zmiennaS2.field1, zmiennaS2.field2, zmiennaS2.field3);






    //ALBO ZE ZMIENNEJ GLOBALNEJ :
    printf("%d   %f   %c\n", my.field1, my.field2, my.field3);

    //Przy drugim typie struktury, gdzie mamy zmienna globalna, mozna takze tworzyc kolejne zmienne, nie ma ograniczenia
    struct my_structure zmiennaX = {63, 47.54, 'd'};
    printf("%d   %f   %c\n", zmiennaX.field1, zmiennaX.field2, zmiennaX.field3);

    return 0;
}
