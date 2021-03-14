#include <stdio.h>
#include <stdlib.h>

unsigned int f(unsigned int n, unsigned int m){
    int wynik=0;
if(m==0) return n;
if(n==0) return m;

return n-m+f(n-1,m)+f(n,m-1);


}


int main()
{

int x;
int y;
scanf("%d\n%d", &x, &y);
printf("%d", f(x,y));





    return 0;
}
