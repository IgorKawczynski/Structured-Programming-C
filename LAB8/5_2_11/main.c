#include <stdio.h>
#include <stdlib.h>

void wytnijzw(char* napis1, char* napis2){

    int i=0;
    int j=0;
    int is_included[256] = {};

    for(i=0; *(napis2+i)!='\0'; i++)
        is_included[*(napis2+i)]=1;
    for(i=0; *(napis1+i)!='\0'; i++)
    {
        if(is_included[*(napis1+i)]==0)
        {
            if(j<i)
                *(napis1+j)=*(napis1+i);
            j++;
        }
    }
    *(napis1+j)='\0';
}

int is_included(wchar_t napis1, wchar_t *napis2){

    int i=0;
    for(int i=0; napis2[i]!='\0'; i++)
        if(napis2[i]==napis1)
            return 1;
    return 0;
}


void w_wytnijzw(wchar_t* napis1, wchar_t* napis2){

    int i=0;
    int j=0;
    // int is_included[256] = {}; - dla wchar_t nie ma to sensu, gdy¿ tablica musia³aby przechowywaæ zbyt du¿o wartoœci,

    for(i=0; *(napis1+i)!=L'\0'; i++)
    {
        if(is_included(*(napis1+i), napis2)==0)
        {
            if(j<i)
                *(napis1+j)=*(napis1+i);
            j++;
        }
    }
    *(napis1+j)=L'\0';
}

//funkcja kasuje znak i wstawia zamiast niego space
void cut_including(char* napis1, char* napis2){

    int i=0;
    int j=0;
    for(i=0; *(napis1+i)!=0; i++)
    {
        for(j=0;*(napis2+j)!=0; j++)
        {
            if(*(napis1+i)==*(napis2+j))
                napis1[i]=32;

        }
    }
    napis1[i]=0;

}


int main()
{

    char napis1[]="Alamk";
    char napis2[]="akota";
    printf("Napis 1 przed wycieciem : %s\n", napis1);
    printf("Napis 2 : %s\n", napis2);
    wytnijzw(napis1, napis2);
    printf("Napis 1 po wycieciu : %s\n", napis1);

    wchar_t napis3[]=L"Alamk";
    wchar_t napis4[]=L"akota";
    wprintf(L"Napis 3 przed wycieciem : %s\n", napis3);
    wprintf(L"Napis 4 : %s\n", napis4);
    w_wytnijzw(napis3, napis4);
    wprintf(L"Napis 3 po wycieciu : %s\n", napis3);

    char napis5[]="Alamk";
    char napis6[]="akota";
    printf("Napis 5 przed wycieciem : %s\n", napis5);
    printf("Napis 6 : %s\n", napis6);
    cut_including(napis5, napis6);
    printf("Napis 5 po wycieciu : %s\n", napis5);

    return 0;
}
