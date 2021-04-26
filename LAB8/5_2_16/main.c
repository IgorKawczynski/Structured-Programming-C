#include <stdio.h>
#include <stdlib.h>
////////////b

void foo(char napis[]){

    scanf("%s", napis);


}

void foo2(wchar_t napis[]){

    scanf(L"%s", napis);

}


int main()
{
    char napis1[30];
    wchar_t napis2[30];

    //char napis1[]="aj"; // kod w ten sposob niezbyt bezpieczny, przy wpisaniu dluzszego znaku i np. spacji to scanf czyta wszystko do spacji

    //char napis1[30]; //tutaj za to mozna do 30 znaku rysowac nawet spacje

    //char *napis1="aj"; //tak tez nie mozna bo w tym wypadku zmienna wskaznikowa jest tylko do odczytu, nie mozna wpisac scanfa // niezainicjowany wskaznik, nie wie w ktore miejsce w pamieci ma trafic

    //char *napis=malloc(30*sizeof(char)); //tak juz git, zainicjalizowalismy wskaznik


    /// jakis komentarz o innym kolorze
    foo(napis1);
    foo2(napis2);
    printf("%s\n", napis1);
    wprintf(L"%s\n", napis2);
    return 0;
}
