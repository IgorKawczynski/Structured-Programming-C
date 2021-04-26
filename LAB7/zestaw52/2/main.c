#include <stdio.h>
#include <stdlib.h>

int suma_wielokrotnosci(unsigned int n, unsigned int m, unsigned int k){

    int suma=0;
    for(int i=0;i<k;i++)
    {
        if((i*n)>m && (i*n)<k)
            suma=suma+(i*n);

    }
    return suma;

}




int main()
{
    printf("%d\n", suma_wielokrotnosci(4, 9, 24));
    return 0;
}
