#include <stdio.h>
#include <stdlib.h>


int wart_bezwzgledna(int n){

if(n<=0)n=n*(-1);
return n;

}


int main()
{

    int n;
    scanf("%d", &n);
    printf("%d\n", wart_bezwzgledna(n));
    return 0;
}
