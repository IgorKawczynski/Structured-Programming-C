#include <stdio.h>
#include <stdlib.h>

int strlength(char *napis){

    int i=0;
    while(napis++)
    {

        i++;
    }
    return i;

}

void cut(unsigned int n, unsigned int m, char* napis){

    int i=0;
    int len=0;
    for(len=0; napis[len]!='\0'; len++);
    if(len+1 > m)
    {
        for(i=0;i+m<len;i++)
            napis[n+i]=napis[i+m+1];
    }
        else
            if( (n<len) && (len+1<m+1))
                napis[n]=0;
}


void w_cut(unsigned int n, unsigned int m, wchar_t* napis){

    int i=0;
    int len=0;
    for(len=0; napis[len]!=L'\0'; len++);
        if(len+1 > m)
        {
            for(i=0;i+m<len;i++)
                napis[n+i]=napis[i+m+1];

        }
        else
            if( (n<len) && (len+1<m+1))
                napis[n]=0;
}


int main()
{
    char napis1[]="ferrrr";
    printf("Napis 1 : %s\n", napis1);
    cut(4, 7, napis1);
    printf("Napis 1 po wycieciu : %s\n", napis1);

    wchar_t napis2[]=L"cyBDnsLPL";
    wprintf(L"Napis 2 : %s\n", napis2);
    w_cut(3, 5, napis2);
    wprintf(L"Napis 2 po wycieciu : %s\n", napis2);




    printf("Hello world!\n");
    return 0;
}
