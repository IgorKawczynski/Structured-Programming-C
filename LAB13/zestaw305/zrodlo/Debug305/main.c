#include <stdio.h>
#include <stdlib.h>

union test
{
    int a;
    char b;
};

int main()
{
    union test zm = {95,'p'};
    int*p;
    p=&zm; // p=  , *p=
    char w = zm.b; // w=  , &w=
    p++; // p=  , *p=
    w--; // w=  , &w=
    zm.b=99;  // w=  , &w=
    return 0;
}
