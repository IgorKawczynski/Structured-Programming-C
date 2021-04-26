#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float foo1(unsigned int n, unsigned int *tab){

    float sredniag=1;
    for(int i=0; i<n; i++)
    {
        sredniag=sredniag * (*(tab + i));
    }
    sredniag=pow(sredniag, 1/(float)n);
    return sredniag;


}


int main()
{

    unsigned int n=5;
    unsigned int *tab=malloc(n*sizeof(unsigned int));
    *(tab)=1;
    *(tab+1)=2;
    *(tab+2)=4;
    *(tab+3)=5;
    *(tab+4)=6;
    printf("%f\n", foo1(n, tab));
    return 0;
}
