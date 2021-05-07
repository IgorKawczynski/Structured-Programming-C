#include <stdio.h>
#include <stdlib.h>

char *foo(int godz, int min, int sek){

    char *temp=malloc(9*sizeof(char)); //6 miejsc na cyfry, 2 na dwukropek, 1 na zerowy
    sprintf(temp, "%02d:%02d:%02d", godz, min, sek);
    return temp;
}

wchar_t *wfoo(int godz, int min, int sek){

    wchar_t *temp=malloc(9*sizeof(wchar_t)); //6 miejsc na cyfry, 2 na dwukropek, 1 na zerowy
    swprintf(temp, 9, L"%02d:%02d:%02d", godz, min, sek);
    return temp;

}

int main()
{
    //przypadek testowy funkcji char
    int g=8;
    int m=15;
    int s=8;
    char *napis1=foo(g,m,s);
    printf("%s\n", napis1);

    //przypadek testowy funkcji wchar_t
    wchar_t *napis2=wfoo(g,m,s);
    wprintf(L"%s\n", napis2);

    //program
    char napis[9];
    sprintf(napis, "%02d:%02d:%02d", g, m, s);
    printf("---\n");
    printf("%s\n", napis);



    return 0;
}
