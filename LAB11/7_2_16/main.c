#include <stdio.h>
#include <stdlib.h>

enum Stan { polaczenie_nawiazane, polaczenie_nienawiazane, polaczenie_w_trakcie_nawiazywania};

struct Komputer
{
    enum Stan stan;
    char* ip;
    char* wlasciciel;

};

void wyswietl(struct Komputer komp1)
{
    if(komp1.stan==1)
        printf("Stan komputera : polaczenie nawiazane \n");
    if(komp1.stan==2)
        printf("Stan komputera : polaczenie nienawiazane \n");
    if(komp1.stan==3)
        printf("Stan komputera : polaczenie w trakcie nawiazywania \n");
    printf("Adres ip : %s \n", komp1.ip);
    printf("Wlasciciel : %s \n", komp1.wlasciciel);
    printf(" ------ \n");
}

int main()
{
    struct Komputer PC1;
    PC1.ip="123.4123.54:20201";
    PC1.wlasciciel="IgorekBerek";
    PC1.stan=3;
    wyswietl(PC1);

    printf("Hello world!\n");
    return 0;
}
