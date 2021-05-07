#include <stdio.h>
#include <stdlib.h>

void capital(char* napis){

    for(int i=0;*(napis+i)!='\0';i++)
    {
        if(*(napis+i)>='a' && *(napis+i)<='z')
            *(napis+i)=*(napis+i)-32;
    }

}



int main()
{

    char napis[]="ala mA koTa bB eeR";
    capital(napis);
    printf("%s\n", napis);
    return 0;
}
