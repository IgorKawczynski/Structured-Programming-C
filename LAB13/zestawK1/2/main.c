#include <stdio.h>
#include <stdlib.h>


//FUNKCJA MIERZACA DLUGOSC LANCUCHA za pomoca inkrementacji na wskazniku
int strlength(char *napis){

    int len=0;
    for(int i=0; *(napis+i)!='\0';i++)
    {
        len=len+1;
    }
    return len;
}


void usun_nieparzyste(char *napis){

    int i=0;
    for(i=0; *(napis+i)!='\0'; i++)
    {
        if(i%2==0)
            napis[i/2]=napis[i];

    }
    if(i % 2 == 0)
        *(napis + (i/2)) = 0;
    else
        *(napis + ((i+1)/2)) = 0;

}


int main()
{
    char napis1[]="gfedgeWERTsx21x";
    printf("napis 1 : %s \n", napis1);
    usun_nieparzyste(napis1);
    printf("napis 1 po usunieciu z nieparzystych indeksow : %s \n", napis1);

    printf("Hello world!\n");
    return 0;
}
