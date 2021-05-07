#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void kopiuj(char* napis, char* tab[]){

    strcpy(tab, napis);

}

void wkopiuj(wchar_t* napis, wchar_t* tab[]){

    wcscpy(tab, napis);

}

int main()
{
    char* napis = "CHARababababa";
    char* tab[20]={"eoeoeo"};
    kopiuj(napis, tab);
    printf("%s\n", tab);

    wchar_t* napis2 = L"WCHARababababa";
    wchar_t* tab2[20]={L"eoeoeo"};
    wkopiuj(napis2, tab2);
    wprintf(L"%s\n", tab2);

    return 0;
}
