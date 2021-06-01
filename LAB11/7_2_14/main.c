#include <stdio.h>
#include <stdlib.h>

enum czworokat{prostokat, kwadrat, trapez, romb, rownoleglobok};

int main()
{
    enum czworokat typ_czworokata;
    typ_czworokata=trapez;
    printf("%d", typ_czworokata); // zwraca indeks, na ktorym stoi podana nazwa czworokata

    return 0;
}
