#include <stdio.h>
#include <stdlib.h>

////// dokonczyc

int rekursja(unsigned int n){

    if(n==0)return 2;
    if(n==1)return 2;
    if(n%2==0)return rekursja(n/2-1)+n/2;
    if(n%2!=0)return 2*rekursja(n-1)-(n-1)/2;
}


int main()
{

    int x;
    scanf("%d", &x);
    printf("%d", rekursja(x));

    return 0;
}
