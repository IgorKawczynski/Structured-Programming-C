#include <stdio.h>
#include <stdlib.h>

int compare_lex(char* napis1, char* napis2){

    int i=0;
    for(i=0; napis1[i]!='\0'; i++)
    {
        if(napis1[i]!=napis2[i])
            if(napis1[i]<napis2[i])
                return 1;
            else
                return 0;

    }
    if(napis1[i]!=0)
        return 0;
    return 1;

}

int w_compare_lex(wchar_t* napis1, wchar_t* napis2){

    int i=0;
    for(i=0; napis1[i]!=L'\0'; i++)
    {
        if(napis1[i]!=napis2[i])
            if(napis1[i]<napis2[i])
                return 1;
            else
                return 0;
    }
    if(napis1[i]!=0)
        return 0;
    return 1;

    //tylko dla ASCII
}

int main()
{
    char* napis1="krowa";
    char* napis2="kot";
    printf("%d\n", compare_lex(napis1, napis2));
    char* napis3="kaowa";
    char* napis4="kzot";
    printf("%d\n", compare_lex(napis3, napis4));
    wchar_t* napis5=L"krowa";
    wchar_t* napis6=L"kot";
    printf("%d\n", w_compare_lex(napis5, napis6));
    wchar_t* napis7=L"kaowa";
    wchar_t* napis8=L"kzot";
    printf("%d\n", w_compare_lex(napis7, napis8));

    return 0;
}
