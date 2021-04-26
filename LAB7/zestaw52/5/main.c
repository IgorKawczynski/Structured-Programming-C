#include <stdio.h>
#include <stdlib.h>

int compare(unsigned int n, int *tab1, int *tab2){

    int sum_index=0;
    for(int i=0;i<n;i++)
    {
        if(*(tab1+i)==*(tab2+i))
            sum_index=sum_index+1;
    }
    return sum_index;




}


int main()
{
    int n=5;
    int tab1[5]={2,4,-2,3,5};
    int tab2[5]={2,0,-2,3,1};


    printf("%d\n", compare(n, tab1, tab2)); //3
    printf("%d\n", compare(n, tab2, tab1)); //3

    return 0;
}
