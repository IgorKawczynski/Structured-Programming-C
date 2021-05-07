#include <stdio.h>
#include <stdlib.h>

int strlength(char* napis){

    int len=0;
    while(*(napis++))
    {
        len++;
    }
    return len;
}


int w_strlength(wchar_t *napis){

    int len=0;
    for(int i=0; *(napis+i)!=L'\0';i++)
    {
        len=len+1;
    }
    return len;
}


//Mam problem z ta funkcja, mianowicie nie moge zadeklarowac dodatkowo kolejnej zmiennej w jej wnetrzu,
//chcialbym ja wykorzystac jako zmienna, ktora przechowywalaby dlugosc napisu1, dzieki temu moglbym rozwazyc przypadki gdy (dlugosc napisu1<n) albo (dlugosc napisu1>=n)
//gdy stworze jednak zmienna jako dodatkowy argument w funkcji ( int m ), a nastepnie nadam mu wartosc juz wewnatrz samej funkcji, wszystko dziala prawidlowo, aczkolwiek nie jest to zgodne z poleceniem
//ostatecznie po probie zadeklarowania kolejnej zmiennej w funkcji przestaje ona wtedy wykonywac swoja procedure i program w zasadzie nic nie robi, funkcja przestaje nawet wykonywać operacje po dopisaniu zwyczajnego ,, int x=5;  '' na poczatku funkcji
//nie wiem za bardzo z czego to wynika, próbowalem zadeklarowac zmienna i poprzez inkrementacje wewnatrz samej funkcji obliczyc dlugosc napisu1 potrzebnego do warunków,
//próbowalem takze poprzez petle while - problem jest ten sam, program sie kompiluje, aczkolwiek funkcja nie wykonuje procedur i program sie zatrzymuje.
void kopiujn(int n, int m, char* napis1, char* napis2){

    //int m=strlength(napis1); //nie działa
    m=strlength(napis1);
    char* temp;
    int j=0;
    int i=0;

    for(j=0;napis2[j]!='\0'; j++)
    {
        temp[j]=napis2[j];

    }

    //gdy dlugosc napisu jest mniejsza od ,,n'' - wtedy kopiuje caly napis1
    if(m<n)
    {

        for(i=0; i<m; i++)
        {
            napis2[i]=napis1[i];
        }
        for(i=0; temp[i]!=0; i++)
        {
            napis2[m+i]=temp[i];
        }
        napis2[m+i]=0;
    }
    //gdy dlugosc napisu jest wieksza lub rowna od ,,n'' - wtedy kopiuje tylko ,,n'' pierwszych elementow z napisu1
    else
    {

        for(i=0; i<n; i++)
        {
            napis2[i]=napis1[i];
        }
        for(i=0; temp[i]!=0; i++)
        {
            napis2[n+i]=temp[i];
        }
        napis2[n+i]=0;
    }

}


void w_kopiujn(int n, int m, wchar_t* napis1, wchar_t* napis2){

    m=w_strlength(napis1);
    wchar_t* temp;
    int j=0;
    int i=0;

    for(j=0;napis2[j]!=L'\0'; j++)
    {
        temp[j]=napis2[j];

    }

    if(m<n)
    {

        for(i=0; i<m; i++)
        {
            napis2[i]=napis1[i];
        }
        for(i=0; temp[i]!=0; i++)
        {
            napis2[m+i]=temp[i];
        }
        napis2[m+i]=0;
    }

    else
    {

        for(i=0; i<n; i++)
        {
            napis2[i]=napis1[i];
        }
        for(i=0; temp[i]!=0; i++)
        {
            napis2[n+i]=temp[i];
        }
        napis2[n+i]=0;
    }

}

int main()
{
    //gdy dlugosc napisu jest mniejsza od podanego n w argumencie funkcji
    char napis1[]="he";
    char napis2[]="a3a2Ef";
    printf("Napis 1 : %s\n", napis1);
    printf("Napis 2 przed skopiowaniem : %s\n", napis2);
    kopiujn(4, 5,  napis1, napis2);
    printf("Napis 2 po skopiowaniu : %s\n", napis2);

    //gdy dlugosc napisu jest wieksza od podanego n w argumencie funkcji
    char napis3[]="heha54he";
    char napis4[]="a3a2Ef";
    printf("Napis 3 : %s\n", napis3);
    printf("Napis 4 przed skopiowaniem : %s\n", napis4);
    kopiujn(4, 5, napis3, napis4);
    printf("Napis 4 po skopiowaniu : %s\n", napis4);


    wchar_t napis5[]=L"he";
    wchar_t napis6[]=L"a3a2Ef";
    wprintf(L"Napis 5 : %s\n", napis5);
    wprintf(L"Napis 6 przed skopiowaniem : %s\n", napis6);
    w_kopiujn(1, 6, napis5, napis6);
    wprintf(L"Napis 6 po skopiowaniu : %s\n", napis6);



    printf("\n");
    return 0;
}


