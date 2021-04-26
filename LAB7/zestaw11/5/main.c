#include <stdio.h>
#include <stdlib.h>

int porownaj(unsigned int n, float *tab1, float *tab2){

    int wynik;
    for(int i=0;i<n;i++)
    {
        if(abs(*(tab1+i)-*(tab2+i))<=0.1)
            wynik=wynik+1;

    }
    if(wynik==n)
        return 1;
    else
        return 0;


}


int main()
{

    int n=5;
    float *tab1=malloc(n*sizeof(float));
    *(tab1)=1;
    *(tab1+1)=2;
    *(tab1+2)=4;
    *(tab1+3)=6;
    *(tab1+4)=3;
     float *tab2=malloc(n*sizeof(float));
    *(tab2)=1.0005;
    *(tab2+1)=2.001;
    *(tab2+2)=4;
    *(tab2+3)=6;
    *(tab2+4)=3;

    printf("%d\n", porownaj(n, tab1, tab2));
    return 0;
}
