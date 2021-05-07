#include <stdio.h>
#include <stdlib.h>

//FUNKCJA MIERZACA DLUGOSC LANCUCHA za pomoca inkrementacji na wskazniku
int strlength(char *napis){

    int len=0;
    for(int i=0; *(napis+i)!='\0';i++)
    {
        len=len+1;
    }
    return len;
}

//FUNKCJA MIERZACA DLUGOSC LANCUCHA za pomoca rekurencji na wskazniku
int strlength2(char* napis){

    if (*napis=='\0') //  albo == 0
        return 0;
    else
        return 1 + strlength2(napis + 1);

}

//FUNKCJA MIERZACA DLUGOSC LANCUCHA za pomoca wskaznika
int strlength3(char* napis){

    int len=0;
    while(*(napis++))
    {
        len++;
    }
    return len;

}
//FUNKCJA ZE STATICEM -- REKURENCYJNA
int strlength4 (char napis[])
{
    int static len = 0;
    if (napis[0] == 0)  // albo ' \0  '
    {
        int a = len;
        len = 0;
        return a;
    }
    else len++;
    strlength4(napis + 1);

}

//FUNKCJA MIERZACA DLUGOSC LANCUCHA WCHAR_T za pomoca inkrementacji na wskazniku
int w_strlength(wchar_t *napis){

    int len=0;
    for(int i=0; *(napis+i)!=L'\0';i++)
    {
        len=len+1;
    }
    return len;
}

int main()
{
    char napis1[]="gewrefd32s32g";
    printf("Napis1 : %s\n", napis1);
    printf("Dlugosc Napis1 : %d\n", strlength(napis1));
    printf("Dlugosc Napis1 : %d\n", strlength2(napis1));
    printf("Dlugosc Napis1 : %d\n", strlength3(napis1));
    printf("Dlugosc Napis1 : %d\n", strlength4(napis1));
    wchar_t napis2[]=L"Aedfd32s32g";
    wprintf(L"Napis2 : %s\n", napis2);
    printf("Dlugosc Napis2 : %d\n", w_strlength(napis2));
    return 0;
}
