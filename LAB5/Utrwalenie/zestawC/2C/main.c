#include <stdio.h>
#include <stdlib.h>

int rek(int z){

    if(z<0 || z>10000)
        return -1;
    if(z==0)
        return 0;
    return z%10+rek(z/10);



}



int main()
{

    printf("%d\n", rek(5469));
    return 0;
}
