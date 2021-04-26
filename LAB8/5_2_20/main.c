#include <stdio.h>
#include <stdlib.h>

char *foo(int godz, int min, int sek){

    char *temp=malloc(9*sizeof(char)); //6 miejsc na cyfry, 2 na dwukropek, 1 na zerowy
    sprintf(temp, "%02d:%02d:%02d", godz, min, sek);
    return temp;



}

int main()
{
    //tu program
    int g=8;
    int m=15;
    int s=8;
    char napis[9];
    sprintf(napis, "%02d:%02d:%02d", g, m, s);
    printf("---\n");
    printf("%s\n", napis);

    //tu funkcja
    char *napis2=foo(g,m,s);
    printf("%s\n", napis);
    return 0;
}
