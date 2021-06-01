#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis[20]="IGOR"; //tu trzeba wpisac swoje imie, pierwsza litera duza, reszta male
    char z = *(napis+2); //z=79'O'
    int a = napis[3]; // a=82   ,z=79'O'
    z++; // a=82   ,z=80'P'
    ++a; // a=83   ,z=80'P'
    z=(a-=2)+3; // a=81   ,z=84'T'
    a=a^4; // a=85   ,z=84'T'
    return 0;
}
