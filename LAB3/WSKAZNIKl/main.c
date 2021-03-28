//ZMIENNE STANDARDOWE -- PRZECHOWUJA WARTOSCI
//ZMIENNE WSKAZNIKOWE -- PRZECHOWUJA ADRESY
//ZMIENNE REFERENCYJNE -- ODWOLUJE SIE (REFERUJE) DO INNEJ RZECZY (NAJCZESCIEJ OBIEKT W PROGRAMOWANIU OBIEKTOWYM) -- JEST TO ODMIANA WSKAZNIKA (BEZPIECZNIEJSZA)


/* DEF WSKAZNIKI
int *a; ----- TZN ZE TWORZYMY WSKAZNIK ( WSKAZNIK TO ODWOLANIE DO ADRESU )
*a ----- tzn ze chcemy wstawić do wskaznika WARTOSC, dlatego nie mozna zrobic tak :

int *a;
*a = &coś; ---- bo to znaczy ze chcemy wstawic wartosc, ktora jest adresem, do wskaznika chcemy dac wlasnie wartosc, ale w tym wypadku ona jest adresem, bo jest ,, & '' czyli adresowanie

 poprawnie jest natomiast tak:

 int *a; ----- czyli tworzymy wskaznik (odwolanie do adresu)
 a = &coś; ---- do wskaznika, odwolania do adresu, dajemy adres



 */








#include <stdio.h>
#include <stdlib.h>

//INT ZWRACAJACY WARTOSC
int zmianax(int x){
x=x-1;


return x;

}

//VOID -- FUNKCJA KTORA SIE WYWOLUJE, ALE SAMA NIE ZWRACA WARTOSCI
//VOID NIEZWRACAJACY WARTOSCI, TYLKO PRZYJMUJACY X'A Z INT MAINA I VOID ZMIENIA W SWOJEJ FUNKCJI SWOJEGO X'A I GO NIE ZWRACA ( STOS - ZMIENNA TYLKO LOKALNA O OGRANICZONYM ZYCIU )
void zmiana2x(int x){

x=x-1;


}

//WSKAZNIK --------- ROZNICA MIEDZY VOIDEM ZWYKLYM KTORY NIE ZWRACA WARTOSCI A WSKAZNIKAMI
void *zmiana3x(int *x){

*x=*x-1;

}


int main()
{



    int x;
    scanf("%d", &x);
    zmiana2x(x); //wywolujemy funkcje void, dajemy jej nasz argument X, ona jednak zmienia swój X lokalnie i nie zwraca nam po¿¹danej wartoœci
    printf("WYWOLANIE VOID BEZ WSKAZNIKA:(%d)\n", x);
    zmiana3x(&x); //wywolujemy funkcje void poprzez przekazanie jej adresu naszego X, ona sama te¿ przyjmuje argument *x a nie x, tzn ¿e odnosi siê do naszego Xa a nie swojego Xa lokalnego i zmienia na adresie naszego Xa w mainie wartosc.
    printf("WYWOLANIE VOID ZE WSKAZNIKIEM:(%d)", x);









    //zobacz debuggerem jak to dziala -- pi staje sie adresem numeru, nie wartoscia numeru
    int numer=43;

    int *pi; ////// !!!!!!!! WAZNE !!!!!!!!! W PRZYPADKU ZWYKLYCH ZMIENNYCH DEKLARACJE MOZNA WYKONAC POZNIEJ I PRZYPISAC WARTOSC, TZN MOZNA ZROBIC INT X; A POZNIEJ WYPISAC X=5, W PRZYPADKU WSKAZNIKOW JEDNAK TRZEBA OD RAZU ZADEKLAROWAC ZE *PI = COS, EWENTUALNIE ZROBIC TO W TEN SPOSOB :

    pi=&numer; // ale tu nie mozna juz napisac *pi, tylko zwykla zmienna, wczesniej zostala ona zadeklarowana jako wskaznik

    // albo lepiej : int *pi=&numer ------ deklaracja od razu











    //NAJLEPSZY PRZYKLAD CZYM SA WSKAZNIKI :



    /*

    void foo(int x, int y){
    int temp=0;
    temp=x;
    x=y;
    y=temp;
    }     ----------- argumenty w funkcji maja krotki okres zycia i zgina po jej wyjsciu i nie zwroca nam wartosci,




    void foo2(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    }    ------------ za pomoca wskaznikow jednak funkcja nam zwroci pozadane wartosci, gdyz uzywamy wskaznika w samej funkcji lokalnej a te wskazniki odnosza sie do zmiennych w mainie i zmieniaja te zmienne w mainie a nie w samej funkcji lokalnej
   */

    return 0;
}
