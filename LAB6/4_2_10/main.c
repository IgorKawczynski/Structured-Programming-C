#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print(unsigned int n, int *tab){

    printf("[");

    for(int i=0; i<n; i++)
    {
        printf(" %d ", *(tab+i));
    }
    printf("]");
    printf("\n");
}


void elements(unsigned int n, int *tab){

    for(int i = 0; i < n; i ++)
    {
        scanf("%d", &(*(tab + i)));

    }
}

int funkcja_a(unsigned int n, int tab1[]){
    int maks = tab1[0];
    for(int i=0;i<n;i++)
        if(tab1[i]>maks)
            maks=tab1[i];

    return maks;

}

int funkcja_b(unsigned int n, int tab1[]){
    int min = tab1[0];
    for(int i=0;i<n;i++)
        if(tab1[i]<min)
            min=tab1[i];

    return min;

}

int funkcja_c(unsigned int n, int tab1[]){
    int max = tab1[0];
    int maxindeks = 0;
    for(int i=0;i<n;i++)
    {

        if(tab1[i]>max)
        {
            max=tab1[i];
            maxindeks=i;
        }
    }


    return maxindeks;
}

int funkcja_d(unsigned int n, int tab1[]){
    int min = tab1[0];
    int minindeks = 0;
    for(int i=0;i<n;i++)
    {

        if(tab1[i]<min)
        {
            min=tab1[i];
            minindeks=i;
        }
    }


    return minindeks;
}

int funkcja_e(unsigned int n, int tab1[]){
    int maks = tab1[0];
    for(int i=0;i<n;i++)
    {
        tab1[i]=abs(tab1[i]);
    }
    for(int i=0;i<n;i++)
        if(tab1[i]>maks)
            maks=tab1[i];

    return maks;

}

int funkcja_f(unsigned int n, int tab1[]){
    int maks = tab1[0];
    int maksindeks=0;
    for(int i=0;i<n;i++)
    {
        tab1[i]=abs(tab1[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(tab1[i]>maks)
        {
            maks=tab1[i];
            maksindeks=i;
        }
    }

    return maksindeks;

}






int main()
{
    int n;
    printf("Enter the number of elements in tab1 : ");
    scanf("%d", &n);
    int tab1[n];
    printf("\n");
    printf("Enter the values of elements in tab1 : \n");
    elements(n, tab1);
    print(n, tab1);
    printf("MAX from tab1 is : %d \n", funkcja_a(n, tab1));
    printf("MIN from tab1 is : %d \n", funkcja_b(n, tab1));
    printf("INDEKS WITH MAX from tab1 is : %d \n", funkcja_c(n, tab1));
    printf("INDEKS WITH MIN from tab1 is : %d \n", funkcja_d(n, tab1));
    printf("ABS MAX from tab1 is : %d \n", funkcja_e(n, tab1));
    printf("ABS MAX from tab1 is : %d \n", funkcja_f(n, tab1));


    return 0;
}

