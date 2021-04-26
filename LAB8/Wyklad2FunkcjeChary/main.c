#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main()
{

    //FUNKCJE : https://en.cppreference.com/w/c/string/byte
    //FUNKCJE W : https://en.cppreference.com/w/c/string/wide


    char napis[]="ab34WRT @#@][,.";
    for(int i=0;napis[i]!=0;i++)
    {
        printf("%d\n", isalnum(napis[i]));
    }

    //STRING COMPARE (porownuje leksykograficznie lancuchy znakow, tzn
    //d > c, bo w ASCII wystepuje pozniej, ma wieksza wartosc, i wtedy funkcja zwraca -1, bo napis2 jest wiêkszy
    //LINK : https://en.cppreference.com/w/c/string/byte/strcmp
    char napis1[]="abc";
    char napis2[]="abd";
    printf("%d\n", strcmp(napis1, napis2));

    //tutaj wartosc bedzie 1 bo napis3 jest wiekszy od napis4, mimo ze po ,, c '' stoi jeszcze dodatkowa litera, to wazna jest trzecia litera
    char napis3[]="abd";
    char napis4[]="abce";
    printf("%d\n", strcmp(napis3, napis4));

    //char ------------> wchar
    // "  " ------------> L"  "
    //printf -----------> wprintf
    //scanf -------------> wscanf

    //wiele, wiele innych funkcji jeszcze

    return 0;
}
