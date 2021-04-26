#include <stdio.h>
#include <stdlib.h>

float rek(unsigned int n){

    if(n<=1)
        return 1;
    return rek(n-2) + (1/(rek(n-1)));

}


int main()
{



    printf("%f\n", rek(2));
    printf("%f\n", rek(3));
    printf("%f\n", rek(4));
    return 0;
}
