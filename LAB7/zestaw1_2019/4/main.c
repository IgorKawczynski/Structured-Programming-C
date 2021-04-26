#include <stdio.h>
#include <stdlib.h>

int compare(unsigned int n, int tab1[n], int tab2[n]){

    int i=0;
    int j=0;
    int max_tab1=0;
    int max_tab2=0;
    for(i=0;i<n;i++)
    {
        if(tab1[i]>tab1[max_tab1])
            max_tab1=i;

    }
    for(j=0;j<n;j++)
    {
        if(tab2[j]>tab2[max_tab2])
            max_tab2=j;

    }
    if(max_tab1==max_tab2)
        return 1;
    return 0;

}


int main()
{
    int n=5;
    int tab1[5]={1,3,21,5,6};
    int tab2[5]={2,64,54,1,-31};

    printf("%d\n", compare(n, tab1, tab2));
    return 0;
}
