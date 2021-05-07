#include <stdio.h>
#include <stdlib.h>

//CHAR
int compare(char* napis1, char* napis2){

    for(int i=0; *(napis1+i)!='\0'; i++)    //ewentualnie for(int i=0; *(napis1+i)!='\0' && *(napis2+i)!='\0'; i++) 
    {                                    
        if(napis1[i]!=napis2[i])
            return 0;
    }

    return 1;
}

//WCHAR_t
int w_compare(wchar_t* napis1, wchar_t* napis2){

    for(int i=0; *(napis1+i)!=L'\0'; i++)  
    {
        if(napis1[i]!=napis2[i])
            return 0;
    }

    return 1;
}


int main()
{
    char *napis1="gfyh";
    char *napis2="gfyh";
    printf("%d\n", compare(napis1, napis2));
    char *napis3="teksth";
    char *napis4="tekstg";
    printf("%d\n", compare(napis3, napis4));
    wchar_t *napis5=L"aaherereadzczrPL";
    wchar_t *napis6=L"aaherereadzczrPL";
    printf("%d\n", w_compare(napis5, napis6));
    wchar_t *napis7=L"aLS";
    wchar_t *napis8=L"Eoeoeoebebebe";
    printf("%d\n", w_compare(napis7, napis8));
    return 0;
}
