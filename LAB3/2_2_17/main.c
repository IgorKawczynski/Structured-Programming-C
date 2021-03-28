#include <stdio.h>
#include <stdlib.h>

static int liczba_wywolan=0;

void ile_wywolan() {

    liczba_wywolan++;
    printf("Liczba wywolan: %d\n", liczba_wywolan);

}



int main()
{

    ile_wywolan();
    ile_wywolan();
    ile_wywolan();
    ile_wywolan();

    return 0;
}
