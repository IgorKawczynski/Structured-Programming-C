#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis[20]="PIOTR"; //tu trzeba wpisac swoje imie, wszystkie litery duze
    char z = *(napis+2); //z=
    int a = napis[3]; // a=   ,z=
    z++; // a=   ,z=
    ++a; // a=   ,z=
    z=(a-=2)+3; // a=   ,z=
    a=a^4; // a=   ,z=
    return 0;
}
