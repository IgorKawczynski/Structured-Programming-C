#include <stdio.h>
#include <stdlib.h>

int rekursja(unsigned int n){

    if(n<=1)return 2;
    else
    switch(n%2){

        case 0: return rekursja(n-1)+n;
        case 1: return 2*rekursja(n-1)-n;
    }

}



int main()
{

    int x;
    scanf("%d", &x);
    if(x%2==0)x=x/2;
    if(x%2!=0)x=x/2+1;

    printf("%d", rekursja(x));

    return 0;
}
