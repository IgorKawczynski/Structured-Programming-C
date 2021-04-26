#include <stdio.h>
#include <stdlib.h>

void elements(unsigned int n, int *tab){

    for(int i=0;i<n;i++)
    {
        printf("Enter %d element of array : ", i+1);
        scanf("%d", &(*(tab+i)));
    }

}

void print(unsigned int n, int *tab){

    printf("[");
    for(int i=0;i<n;i++)
    {
        printf(" %d ", *(tab+i));
    }
    printf("]\n");
}


int max(unsigned int n, int tab[n]){

    int temp=tab[0];
    for(int i=0;i<n;i++)
    {

        if(tab[i]>temp)
        {
            temp=tab[i];
        }

    }
    return temp;
}

int min(unsigned int n, int tab[n]){

    int temp=tab[0];
    for(int i=0;i<n;i++)
    {
       if(tab[i]<temp)
       {
           temp=tab[i];
       }

    }
    return temp;
}

int maxindex(unsigned int n, int tab[n]){

    int temp=tab[0];
    int tempindex=0;
    for(int i=0;i<n;i++)
    {
        if(tab[i]>temp)
        {
            temp=tab[i];
            tempindex=i;
        }

    }
    return tempindex;
}


int minindex(unsigned int n, int tab[n]){

    int temp=tab[0];
    int tempindex=0;
    for(int i=0;i<n;i++)
    {
        if(tab[i]<temp)
        {
            temp=tab[i];
            tempindex=i;
        }

    }
    return tempindex;
}

int maxabs(unsigned int n, int tab[n]){

    int tempmaxabs=tab[0];
    for(int i=0;i<n;i++)
    {
        if(abs(tab[i])>abs(tempmaxabs))
        {
            tempmaxabs=tab[i];
        }
    }
    return tempmaxabs;

}


int maxabsindex(unsigned int n, int tab[n]){

    int tempmaxabs=tab[0];
    int tempindexmaxabs=0;
    for(int i=0;i<n;i++)
    {
        if(abs(tab[i])>abs(tempmaxabs))
        {
            tempmaxabs=tab[i];
            tempindexmaxabs=i;
        }
    }
    return tempindexmaxabs;

}

int main()
{

    int n;
    printf("Enter number of elements in array : ");
    scanf("%d", &n);
    int *tab1=malloc(n*sizeof(int));
    elements(n, tab1);
    print(n, tab1);
    printf("MAX from TAB is : %d\n", max(n, tab1));
    printf("MAXindex from TAB is : %d\n", maxindex(n, tab1));
    printf("MIN from TAB is : %d\n", min(n, tab1));
    printf("MINindex from TAB is : %d\n", minindex(n, tab1));
    printf("ABS MAX from TAB is : %d\n", maxabs(n, tab1));
    printf("ABS MAXindex from TAB is : %d\n", maxabsindex(n, tab1));

    printf("Hello world!\n");
    return 0;
}
