#include <stdio.h>
#include <stdlib.h>

int rek(unsigned int n){

    if(n==0 || n==1)return 1;
    if(n%2==0)return rek(n-1)+n;
    if(n%2!=0)return rek(n-1)*n;

}


int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", rek(x));
    return 0;
}
