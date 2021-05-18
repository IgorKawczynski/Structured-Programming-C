#include <stdio.h>
#include <stdlib.h>

struct Samolot{

    char* model;
    int liczba_silnikow;

};

int minimum(struct Samolot tab[], unsigned int n){


    int temp=tab[0].liczba_silnikow;
    for(int i=1; i<n; i++)
    {
        if(temp > tab[i].liczba_silnikow)
        {
            temp=tab[i].liczba_silnikow;
        }

    }
    return temp;
}

int main()
{

    struct Samolot tab1[4];
    tab1[0].model="Boening 727";
    tab1[0].liczba_silnikow=2;
    tab1[1].model="Boening 747";
    tab1[1].liczba_silnikow=4;
    tab1[2].model="Boening 617";
    tab1[2].liczba_silnikow=1;
    tab1[3].model="AstraZeneca 1024";
    tab1[3].liczba_silnikow=20;

    printf("%d\n", minimum(tab1, 4));
    return 0;
}
