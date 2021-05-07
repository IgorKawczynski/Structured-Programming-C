#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *glue(char* napis1, char* napis2, char* napis3){

    char* temp=malloc((strlen(napis1)+strlen(napis2)+strlen(napis3)+1)*sizeof(char));
    strcpy(temp, napis1);
    strcat(temp, napis2);
    strcat(temp, napis3);
    return temp;

}

wchar_t *wglue(wchar_t* napis1, wchar_t* napis2, wchar_t* napis3){

    wchar_t* temp=malloc((strlen(napis1)+strlen(napis2)+strlen(napis3)+1)*sizeof(wchar_t));
    wcscpy(temp, napis1);
    wcscat(temp, napis2);
    wcscat(temp, napis3);
    return temp;

}

int main()
{
    char* napis1="AAAAAa";
    char* napis2="BBBBBBb";
    char* napis3="CCCCc";
    printf("%s\n", glue(napis1, napis2, napis3));

    wchar_t* napis4=L"11111";
    wchar_t* napis5=L"222222";
    wchar_t* napis6=L"333333";
    wprintf(L"%s\n", wglue(napis4, napis5, napis6));
    return 0;
}
