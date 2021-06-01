#include <stdio.h>
#include <stdlib.h>

int strlength(char *napis){

    int len=0;
    for(int i=0; *(napis+i)!='\0';i++)
    {
        len=len+1;
    }
    return len;
}

char rightcapital(char* napis){

    int temp=strlength(napis);
    for(int i=temp; i>0; i--)
    {
        if(*(napis+i)>='A' && *(napis+i)<='Z')
            return *(napis+i);
    }
    return '\0';

}

int main()
{
    char napis1[]="WERht23";
    char napis2[]="888777371";
    printf("Pierwsza duza litera od prawej w napis1 : %c\n", rightcapital(napis1));
    printf("Pierwsza duza litera od prawej w napis2 : %c\n", rightcapital(napis2));
    return 0;
}
