#include <stdio.h>
#include <stdlib.h>

void foo(int* tab, int n)
{
    for(int i=0;i<n-2;i++)
    {
        *(tab+i)+=3;
    }
}

int main()
{
    int tab[] = {5,2,5,2,9,8};
    int *wsk=tab-2;
    foo(wsk,5);
    int b = *(wsk+=4); //b=5
    int c = b+2; // b=5  , c=7
    int d = b^c; // b=5  , c=7  , d=2
    int e = (wsk+=-1)[2]; // b=5  , c=7  , d=2  , e=2
    e = (d *= 8) + (c /= 3); // b=5  , c=2  , d=16  , e=18
    c = d - (b+=8); // b=13  , c=3  , d=16  , e=18
    b = *wsk + e; // b=20  , c=3  , d=16  , e=18
    return 0;
}
