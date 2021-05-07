#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void upper(char* napis){

    int i=0;
    for(i=0; *(napis+i)!='\0'; i++)
    {
        *(napis+i)=toupper(*(napis+i));
    }

}

void wupper(wchar_t* napis){

    int i=0;
    for(i=0; *(napis+i)!=L'\0'; i++)
    {
        *(napis+i)=toupper(*(napis+i));
    }

}


int main()
{

    char napis1[]="eb2Aeebe";
    upper(napis1);
    printf("%s\n", napis1);

    wchar_t napis2[]=L"eb2Aeebe";
    wupper(napis2);
    wprintf(L"%s\n", napis2);

    return 0;
}
