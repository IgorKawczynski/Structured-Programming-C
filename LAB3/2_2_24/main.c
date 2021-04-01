#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int funkcja(unsigned int n){

    if (n == 0 || n == 1)return 1;
    return funkcja(n-1)*2;



}


int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", funkcja(x));
    return 0;
}
