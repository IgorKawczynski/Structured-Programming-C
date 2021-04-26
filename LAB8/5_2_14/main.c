#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>


void foo1(char *napis){

    //printf("%s", napis);
    puts(napis);
}

void foo2(wchar_t *napis){

    //wprintf(L"%s", napis);
    fputws(napis, stdout);


}


int main()
{

    char napis1[]="abcWERT";
    foo1(napis1);
    wchar_t napis2[]=L"abcWERT";
    foo2(napis2);


    return 0;
}
