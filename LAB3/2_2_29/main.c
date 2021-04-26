#include <stdio.h>
#include <stdlib.h>

int NWD(unsigned int n, unsigned int m){

    if(n==m)
        return n;
    if(n>m)
        return NWD(n-m, m);
    if(m>n)
        return NWD(n, m-n);

}

int main()
{

    int x;
    int y;
    scanf("%d\n%d", &x, &y);
    printf("%d\n", NWD(x,y));

    printf("Hello world!\n");
    return 0;
}
