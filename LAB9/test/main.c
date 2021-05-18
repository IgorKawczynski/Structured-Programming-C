#include <stdio.h>
#include <stdlib.h>

void wytnij(char * napis, int n, int m){

    char napis_pomocniczy[60]= "";
    int i;
    int k = 0;
    for(i = 0; napis[i]!='\0'; i++)
    {
        if(i<n || i>m)
        {
            napis_pomocniczy[k] = napis[i];
            k++;
        }
    }
    napis_pomocniczy[i] = 0;

    i = 0;

    for(i = 0; napis_pomocniczy[i]!='\0'; i++)
    {
       napis[i] = napis_pomocniczy[i];
    }
    napis[i] = 0;

}

int main()
{
    char tekst[]= "razdwatrzyrazdwa";
    printf("%s\n", tekst);
    wytnij(tekst, 1,3);
    printf("%s\n", tekst);
    return 0;
}

