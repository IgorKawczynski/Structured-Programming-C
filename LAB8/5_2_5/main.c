#include <stdio.h>
#include <stdlib.h>

void przepisz(char *napis1, char *napis2){

    int i=0;
    for(i=0; napis1[i]!='\0'; i++)
    {
        napis2[i]=napis1[i];
    }
    napis2[i]=0;
}

void w_przepisz(wchar_t* napis1, wchar_t* napis2){

    int i=0;
    for(i=0; napis1[i]!=L'\0'; i++)
    {
        napis2[i]=napis1[i];
    }
    napis2[i]=L'\0'; //zakonczenie przepisywania
}


int main()
{

    char napis1[]="gfydygyhgf";
    char napis2[]="a32Ef";
    printf("Napis 1 : %s\n", napis1);
    printf("Napis 2 przed przepisaniem : %s\n", napis2);
    przepisz(napis1, napis2);
    printf("Napis 2 po przepisaniu : %s\n", napis2);

    printf("\n");

    wchar_t napis3[]=L"gfydygyhgf";
    wchar_t napis4[]=L"a32Ef";
    wprintf(L"Napis 3 : %s\n", napis3);
    wprintf(L"Napis 4 przed przepisaniem : %s\n", napis4);
    w_przepisz(napis3, napis4);
    wprintf(L"Napis 4 po przepisaniu : %s\n", napis4);


//STA£Y NAPIS, BO MAMY WSKAZNIK DO CHARA W MAINIE, WI C èLE
//    char *napis1="gfydygyhgf";
//    char *napis2="a32Ef";
//    printf("Napis 1 : %s\n", napis1);
//    printf("Napis 2 przed przepisaniem : %s\n", napis2);
//    przepisz(napis1, napis2);
//    printf("Napis 2 po przepisaniu : %s\n", napis2);

    return 0;
}
