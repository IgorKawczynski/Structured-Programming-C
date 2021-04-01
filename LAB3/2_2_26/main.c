#include <stdio.h>
#include <stdlib.h>

int rek(unsigned int n){

    if(n<=2)return 1;
    if(n%3==0)return rek(n - 1) + rek(n - 2);
    if(n%3==1)return 5 * rek(n - 1) + 4;
    if(n%3==2)return rek(n - 1);

}

int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", rek(x));
    return 0;
}
