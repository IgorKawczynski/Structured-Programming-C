#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis[20]="Piotr"; //tu trzeba wpisac swoje imie, pierwsza litera duza, reszta male
    char z = *(napis+2); //z=
    int a = napis[3]; // a=   ,z=
    z++; // a=   ,z=
    ++a; // a=   ,z=
    z=(a-=2)+3; // a=   ,z=
    a=a^4; // a=   ,z=
    return 0;
}
