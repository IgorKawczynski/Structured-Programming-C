#include <stdio.h>
#include <stdlib.h>

int dlugosc(char*napis)
{
    int i=0;
    while(napis[i]!=0)
    {
        i++;
    }
    return i;
}

int foo(char*napis1, char*napis2, int n)
{
    if(n>dlugosc(napis1) || n>dlugosc(napis2))
        return 0;
    if(napis1[n]<napis2[n])
        return 1;
    return 0;
}

int main()
{
    char napis1[40]="abcde21323";
    printf("%d\n",dlugosc(napis1));
    char napis2[40]="tERTSxewq";
    printf("%d\n",foo(napis1,napis2,5));
    return 0;
}
