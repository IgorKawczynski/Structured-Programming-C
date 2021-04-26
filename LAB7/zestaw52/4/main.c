#include <stdio.h>
#include <stdlib.h>

int rek(unsigned int n){

    if(n<=1)
        return 1;
    if(n>0)
    {
        if(n%3==0)
            return rek(n/3-1);
        if(n%3==1)
            return rek(n-1)+1;
    }
    if(n>=0)
        if(n%3==2)
            return 5;

}



int main()
{

    printf("%d\n", rek(2));
    printf("%d\n", rek(3));
    printf("%d\n", rek(4));
    printf("%d\n", rek(5));

    return 0;
}
