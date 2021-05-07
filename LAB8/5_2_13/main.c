#include <stdio.h>
#include <stdlib.h>

void wytnijtm(char* napis1, char* napis2){

    int i=0;
    int j=0;
    for(i=0; *(napis1+i)!='\0'; i++) //dlugosc napisu
        if(*(napis1+i)!=*(napis2+i))
           {
               if(i>j)
                *(napis1+j)=*(napis1+i);
                j=j+1;
           }
            *(napis1+j)='\0';
}


void w_wytnijtm(wchar_t* napis1, wchar_t* napis2){

    int i=0;
    int j=0;
    for(i=0; *(napis1+i)!=L'\0'; i++)
        if(*(napis1+i)!=*(napis2+i))
           {
               if(i>j)
                *(napis1+j)=*(napis1+i);
                j=j+1;
           }
            *(napis1+j)=L'\0';
}


int main()
{

    char napis1[]="Ala ma Kottta";
    char napis2[]="Axa MA Kotata";
    printf("Napis 1 przed wycieciem : %s\n", napis1);
    printf("Napis 2 : %s\n", napis2);
    wytnijtm(napis1, napis2);
    printf("Napis 1 po wycieciu : %s\n", napis1);


    wchar_t napis3[]=L"Ala ma Kottta";
    wchar_t napis4[]=L"Axa MA Kotata";
    wprintf(L"Napis 3 przed wycieciem : %s\n", napis3);
    wprintf(L"Napis 4 : %s\n", napis4);
    w_wytnijtm(napis3, napis4);
    wprintf(L"Napis 3 po wycieciu : %s\n", napis3);

    return 0;
}
