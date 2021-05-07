#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void foo(char napis[]){

//    scanf("%s", napis); //wczytuje tylko do momentu napotkania spacji
//    gets(napis);  //opcja malo bezpieczna przy przepelnieniu bufora
    fgets(napis, 30, stdin);


}

void foo2(wchar_t napis[]){

//    wscanf(L"%s", napis); //wczytuje tylko do momentu napotkania spacji
    fgetws(napis, 30, stdin);

}

int main()
{
    char napis1[30];
    wchar_t napis2[30];                                                                        /// komentarz o innym kolorze
    printf("Input Napis1 : ");
    foo(napis1);
    printf("Input Napis2 : ");
    foo2(napis2);
    printf("Napis1 : %s\n", napis1);
    wprintf(L"Napis2 : %s\n", napis2);
    return 0;
}
