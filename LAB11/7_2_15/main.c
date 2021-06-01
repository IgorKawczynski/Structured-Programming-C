#include <stdio.h>
#include <stdlib.h>

enum zwierzak { PIES, KOT,KURA, KACZKA};

int main()
{
    enum zwierzak zm;
    zm=KURA;
    printf("%d\n",zm);
    return 0;
}
