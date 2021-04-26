#include <stdio.h>
#include <stdlib.h>

int rek(unsigned int n){

    if(n<=2)
        return 1;
    if(n%3==0)
        return rek(n-1) + rek(n-2);
    if(n%3==1)
        return 5 * rek(n-1) + 4;
    if(n%3==2)
        return rek(n+1-2);

}





int main()
{

    printf("%d\n", rek(0));
    printf("%d\n", rek(1));
    printf("%d\n", rek(2));
    printf("%d\n", rek(3));
    printf("%d\n", rek(4));
    printf("%d\n", rek(5));
    printf("%d\n", rek(6));
    printf("%d\n", rek(7));
    printf("%d\n", rek(8));
    printf("%d\n", rek(9));
    printf("%d\n", rek(10));
    printf("%d\n", rek(11));

    printf("siema!\n");
    return 0;
}
