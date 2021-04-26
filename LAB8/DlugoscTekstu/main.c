#include <stdio.h>
#include <stdlib.h>

//FUNKCJA MIERZACA DLUGOSC LANCUCHA za pomoca tablicy
int length1(char napis[]){
    int dlugosc=0;
    for(int i=0; napis[i]!='\0'; i++) // \0 JAKO ZAKONCZENIE LANCUCHA ZNAKOW, moze byc tez == 0 po prostu
    {
        dlugosc = dlugosc + 1;
    }
    return dlugosc;
}


//FUNKCJA MIERZACA DLUGOSC LANCUCHA za pomoca rekurencji na wskazniku
int length2(char* napis){

    if (*napis=='\0') //  ale moze byc tez == 0
        return 0;
    else
        return 1 + length2(napis + 1);

}



//FUNKCJA MIERZACA DLUGOSC LANCUCHA za pomoca wskaznika
int length3(char* napis){

    int dlugosc=0;
    while(*(napis++))
    {
        dlugosc++;
    }
    return dlugosc;

}
//FUNKCJA ZE STATICEM -- REKURENCYJNA
int length4 (char text[])
{
    int static len = 0;
    if (text[0] == 0)  // dokladniej powinno byc ' \0  '
    {
        int a = len;
        len = 0;
        return a;
    }
    else len++;
    length4(text + 1);

}



int main()
{

    char tekst554[]="omgje32#ewqu";
    printf("%d\n", length1(tekst554) );
    printf("%d\n", length2(tekst554) );
    printf("%d\n", length3(tekst554) );
    printf("%d\n", length4(tekst554) );
    printf("\n");
    char tekst556[]="2$";
    printf("%d\n", length1(tekst556) );
    printf("%d\n", length2(tekst556) );
    printf("%d\n", length3(tekst556) );
    printf("%d\n", length4(tekst556) );


    return 0;
}


