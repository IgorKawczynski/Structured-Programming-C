#include <stdio.h>
#include <stdlib.h>

int foo(int*a,int*b)
{
    if (*a>*b)
        return *a;
    return *b;
}

int main()
{
    int tab[] = {3,-3,5,2,9,8};
    int *wsk=tab-2;
    int b = *(wsk+=4); //b=5
    int c = b+2; // b=5 , c=7
    int d = foo(&b,&c); // b=5  , c=7  , d=7
    int e = (wsk+=-1)[2]; // b=5  , c=7  , d=7  , e=2
    e = (d *= 8) + (c /= 3); // b=5  , c=2  , d=56  , e=58
    c = d - (b+=8); // b=13  , c=43  , d=56  , e=58
    b = *wsk + e; // b=55  , c=43  , d=56  , e=58
    return 0;
}
