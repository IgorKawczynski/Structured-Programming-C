#include <stdio.h>
#include <stdlib.h>

int function5(unsigned int n, int tab1[n], int tab2[n])
{
    int suma=0;

    for(int i=0; i<n; i++)
    {
        if(tab1[i]==tab2[i])
        {
            suma = suma + 1;

        }

    }

    return suma;

}


int main()
{
    int n = 5;
    int tab1[5]={2,4,-2,3,5};
    int tab2[5]={2,0,-2,3,1};
    printf("%d\n", function5(n, tab1, tab2));
    int n2 = 7;
    int tab1_2[7]={0,2,4,3,2, 6, 321};
    int tab2_2[7]={0,0,1,4,1, 24, 123};
    printf("%d\n", function5(n2, tab1_2, tab2_2));
    int n3 = 7;
    int tab1_3[7]={44,423,4,5,2, 6, 321};
    int tab2_3[7]={33233,321321,421,1,32, 24, 323};
    printf("%d\n", function5(n3, tab1_3, tab2_3));


    return 0;
}
