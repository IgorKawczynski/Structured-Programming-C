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
    p=&zm; // p=0x65fe10  , *p=95
    char w = zm.b; // w=95'_'  , &w=0x65fe17
    p++; // p=0x65fe14  , *p=1593835520
    w--; // w=94'^'  , &w=0x65fe17
    zm.b=99;  // w=94'^'  , &w=0x65fe17
    return 0;
}
