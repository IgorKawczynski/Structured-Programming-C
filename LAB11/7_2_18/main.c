#include <stdio.h>
#include <stdlib.h>

union extrauint
{
    unsigned int a;
    unsigned char tab[4];
};

int main()
{
    union extrauint zm;
    zm.a=0x61626364;
    printf("%u\n",zm.a);
    printf("%c\n",zm.tab[0]);
    printf("%c\n",zm.tab[1]);
    printf("%c\n",zm.tab[2]);
    printf("%c\n",zm.tab[3]);
    return 0;
}
