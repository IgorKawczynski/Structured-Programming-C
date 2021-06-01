#include <stdio.h>
#include <stdlib.h>

struct Uczen
{
    char imie[35];
    int wiek;
};

int dlugosc(char napis[])
{
    int i=0;
    while(napis[i]!=0)
    {
        i++;
    }
    return i;
}

int foo(struct Uczen tab[], int n)
{
    int temp=dlugosc(tab[0].imie);
    for(int i=1;i<n;i++)
    {
        if(temp<dlugosc(tab[i].imie))
        {
            temp=dlugosc(tab[i].imie);
        }
    }
    return temp;
}

int main()
{
    struct Uczen u1 = {"IGORIGORIGORigor", 124};
    struct Uczen u2 = {"Sylwia",14};
    struct Uczen u3 = {"Olga",12};
    struct Uczen u4 = {"Krzysztof",15};
    struct Uczen tablica[4]={u1,u2,u3,u4};
    printf("%d\n",foo(tablica,4));
    return 0;
}
