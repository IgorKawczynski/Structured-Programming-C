#include <stdio.h>
#include <stdlib.h>

void glue(char *napis1, char *napis2, char *napis3){

    int i=0;
    int j=0;
    for(i=0; napis1[i]!='\0'; i++)
        napis3[i]=napis1[i];
    for(j=0; napis2[j]!='\0'; j++)
    {
        napis3[j+i]=napis2[j];

    }
    napis3[j+i]='\0';

}


void w_glue(wchar_t *napis1, wchar_t *napis2, wchar_t *napis3){

    int i=0;
    int j=0;
    for(i=0; napis1[i]!=L'\0'; i++)
        napis3[i]=napis1[i];
    for(j=0; napis2[j]!=L'\0'; j++)
    {
        napis3[j+i]=napis2[j];

    }
    napis3[j+i]=L'\0';

}


int main()
{
    char napis1[]="Ala m";
    char napis2[]="a kota";
    char napis3[50];
    printf("Napis 1 : %s\n", napis1);
    printf("Napis 2 : %s\n", napis2);
    printf("Napis 3 : %s\n", napis3);
    glue(napis1, napis2, napis3);
    printf("Napis 3 po sklejeniu : %s\n", napis3);


    wchar_t napis4[]=L"Ala m";
    wchar_t napis5[]=L"a kota";
    wchar_t napis6[50];
    wprintf(L"Napis 4 : %s\n", napis4);
    wprintf(L"Napis 5 : %s\n", napis5);
    wprintf(L"Napis 6 : %s\n", napis6);
    w_glue(napis4, napis5, napis6);
    wprintf(L"Napis 6 po sklejeniu : %s\n", napis6);

    return 0;
}
