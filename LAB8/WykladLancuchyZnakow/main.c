#include <stdio.h>
#include <stdlib.h>

//FUNKCJA MIERZACA DLUGOSC LANCUCHA **WAZNE** -- za pomoca wskaznika na char'a
int length1(char* napis){  //wskaznik na chara

    int dlugosc=0;
    while(*(napis++))
    {
        dlugosc++;
    }
    return dlugosc;

}

//Albo za pomoca tablic charów
int length2(char napis[]){
    int dlugosc=0;
    for(int i=0; napis[i]!='\0'; i++) // \0 W ASCII CZYLI NULL -- ZAKONCZENIE LANCUCHA ZNAKOW !
    {
        dlugosc = dlugosc + 1;
    }
    return dlugosc;
}


int length(char napis[]){

    int dlugosc = 0;
    for(int i=0; i<100; i++)
    {
        if(napis[i]>'\0' || napis[i]<'\127')
            dlugosc = dlugosc + 1;

    }

    return dlugosc;



}

int main()
{
    char napis[] = "Hahe";      //napisy mozna okreslac w tablicy jednowymiarowej, C nie ma stringow
    char napis1[] = "hehehahaeio";
    const char *napis2 = "oyeyu";
    napis1[4] = 'M';
    *(napis1 + 7) = 'M';
    /* napis2[2] = "3"; */  // nie jest to mo¿liwe, ( const char *napis2 mozna zapisac po prostu jako char *napis2, ale to wskaznik na stala )
    printf("%p\n", napis1);
    printf("%p\n", napis2);  //adres napisu, czyli "hehehahaeio"
    printf("%p\n", &napis2); //adres zmiennej wskaznikowej, czyli *napis2
    printf("Hello world!\n");

    //Opcja gorsza, skanuje do momentu spacji
    char slowo[5];
    scanf("%s\n", slowo);  //TUTAJ AMPER SANDA nie uzywaj, bo CHAR to TABLICA, i pisz¹c & odwolujesz sie do adresu pocz¹tku tablicy ( to samo co w tablicach )
    printf("%s\n", slowo);

    //Opcja lepsza, skanuje razem ze spacjami, niebezpieczna przy przepelnieniu rozmiaru
    char slowo2[5];
    gets(slowo2);
    printf("%s\n", slowo2);
    puts(slowo2);

    //dodaje koniec linii na koncu napisu o ile nie wype³niliœmy rozmiaru, opcja bezpieczniejsza od gets, uzytkow
    char slowo3[10];
    fgets(slowo3, 5, stdin);
    printf("%s\n", slowo3);
    puts(slowo3);
    fputs(slowo3, stdout);

    char tekst0[] = "ioejiowwqecad\0";  //napis zostanie wypisany do momentu \0
    char tekst1[] = "ert";
    char tekst2[] = {'a', 'b', 'c'}; //na koñcu tu nie bêdzie koñca napisu, tzn zera, tzn \0
    char tekst2_2[] = {'a', 'b', 'c', '\0'};  //teraz nasz napis siê zakoñczy na \0
    char tekst3[] = "xyz";
    puts(tekst1);
    puts(tekst2);  // przez powy¿sz¹ kwestiê, po tekœcie2 program dalej wyœwietli³ napis, w tym wypadku tekst1, gdy¿ jest w adresie dalej od tekstu2
    puts(tekst3);  // tekst2 nie ma w³asnego koñca, program wypisze znaki do momentu napotkania koñca charu, tzn ' \0 '

    //fputs wypisze nam wszystko po kolei, bez przerwy, tak samo jak printf("coœ"), gdy nie dodamy koñca linii, czyli printf("coœ\n")
    char tekstf1[] = "ert";
    char tekstf2[] = {'a', 'b', 'c'};
    char tekstf3[] = "xyz";
    fputs(tekstf1, stdout);
    fputs(tekstf2, stdout);
    fputs(tekstf3, stdout);

    //podobnie jak powyzej, bez wyznaczenia koñca linii, program wszystko wypisze w jednej linii
    char tekstprint[] = "abc";
    char tekstprint2[] = "ert";
    printf("%s\n", tekstprint);
    printf("%s\n", tekstprint2);

    //Wyswietlanie cyfr na rozne sposoby
    float a = 1234.8967;
    printf("%5.2f\n", a);  //5 znakow (czyli 1234.) oraz 2 miejsca po przecinku
    printf("%10.3f\n", a);  //10 znakow zarezerwowane, ze spacjami, z kropkami
    printf("%010.2f\n", a);
    printf("%010.1e\n", a);
    printf("%010.1E\n", a);

    //wyswietlanie lancucha znakow na rozne sposoby
    char tekst[15]="informatyka";
    printf("%s\n", tekst);
    printf("%20s\n", tekst); //20 znakow zarezerwowane
    printf("%-20s\n", tekst); //20 znakow zarezerwowane z wyrownaniem do lewej strony
    printf("%20.5s\n", tekst); //jw ale mozemy dodac jakas literke i bedzie na koncu
    printf("%-20.5s\n", tekst);

    char napisek[] = "heheszki";
    printf("%d\n", length(&napisek));
    printf("%d\n", length2(napisek));

    //wyswietlanie, roznice w inkrementacji miedzy tablica char a wskaznikiem do char
    char tekst__1[]="abcde";
    printf("%Iu\n", sizeof(tekst__1));
    printf("%p\n", tekst__1);
    printf("%p\n", &tekst__1);
    //tekst__1="WERT";  // nie zadziała nam przypisanie nowej, stałej wartosci do tablicy/lancucha charów
    printf("%s\n", tekst__1);
    //tekst__1++;  //nie zadziala nam takze inkrementacja w ten sposob, bo mamy tablice znakow
    printf("%s\n", tekst__1);


    char *tekst__2="abcde";
    printf("%Iu\n", sizeof(tekst__2));
    printf("%p\n", tekst__2);
    printf("%p\n", &tekst__2);
    tekst__2="WERT";  // w tym przypadku działa, gdyż przypisujemy stałą do wskaznika
    printf("%s\n", tekst__2);
    tekst__2++; //wskaznik przesuwamy o jeden w prawo
    printf("%s\n", tekst__2);

    char tekst554[]="omgjeewqu";
    printf("%d\n", length2(tekst554) );
    printf("%d\n", length1(tekst554) );
    printf("%d\n", length(tekst554) );


    return 0;
}


