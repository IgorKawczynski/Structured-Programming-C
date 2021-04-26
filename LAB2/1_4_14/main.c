#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    unsigned int n;
    printf("Wypisz n\n");
    scanf("%u", &n);
    int a;
    int b;
    float c;

//    c*c = (a*a) + (b*b);
    for(a=1;a<=n;a++)
    {
        for(b=1;b<=n;b++)
        {
            c = pow((a*a+b*b), (float)(0.5));
            if(c == (int)c)
                printf("(%d, %d, %d)\n", a, b, (int)c);
        }
    }
    printf("Hello world!\n");

    return 0;
}
