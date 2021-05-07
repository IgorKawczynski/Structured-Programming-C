#include <stdio.h>
#include <stdlib.h>

//char - tylko ASCII
//wchar_t - szeroki znak - zajmuje wiecej pamieci


void wyczysc(char napis[]){

    napis[0]='\0'; // albo =0

}

void wyczysc2(char *napis){

    *napis='\0'; // albo =0

}

void wyczysc3_wchar(wchar_t *napis){

    *napis=L'\0'; // albo =0

}

int main()
{
    // char* napis1="gfederg";  // NIE NALEZY W MAINIE ROBIC WSKAZNIKOWO,
                                // MIMO ZE W FUNKCJI ARGUMENTEM JEST WSKAZNIK - WSKAZNIKA W TEN SPOSÓB
                                //ZADEKLAROWANEGO NIE MOZNA MODYFIKOWAC, TRZEBA WIEC ZASTOSOWAC TABLICE NA CHARY

    char napis1[]="gfedge";
    char napis2[]="gferga";
    wchar_t napis3[]=L"gfsaeRhgw";
    printf("Napis1 przed wyczyszczeniem : %s\n", napis1);
    printf("Napis2 przed wyczyszczeniem : %s\n", napis2);
    wprintf(L"Napis3 przed wyczyszczeniem : %s\n", napis3);
    wyczysc(napis1);
    wyczysc2(napis2);
    wyczysc3_wchar(napis3);
    printf("Napis1 po wyczyszczeniu : %s\n", napis1);
    printf("Napis2 po wyczyszczeniu : %s\n", napis2);
    wprintf(L"Napis3 po wyczyszczeniu : %s\n", napis3);

    return 0;
}
