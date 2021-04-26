#include <stdio.h>
#include <stdlib.h>

int *wsk(unsigned int n, int *tab1, int*tab2){

    int *tab3=(int*)malloc((2*n)*sizeof(int));
    for(int i=0;i<n;i++)
    {
        *(tab3+i)=*(tab1+i);

    }
    for(int j=n;j<2*n;j++)
    {
        *(tab3+j)=*(tab2+(j-n));

    }
    sort(2*n, tab3);

    return tab3;



}

int min(unsigned int n, int tab1[]){

    int i=0;
    int min = 0;
    for(i=1;i<n;i++)
        if(tab1[i]<tab1[min])
            min=i;

    return min;

}


void sort(unsigned int n, int tab1[]){
    int pom=0;
    int temp=0;
    for(int i=0;i+1<n;i++)
    {
        temp=min(n-i, tab1);
        pom=tab1[n-i-1];;
        tab1[n-i-1]=tab1[temp];
        tab1[temp]=pom;
    }
}



int main()
{

    int n=4;
    int tab1[4]={3,4,1,6};
    int tab2[4]={7,5,2,9};

    printf("%p\n", wsk(4, tab1, tab2));
    printf("%d\n", *wsk(4, tab1, tab2));
    printf("%d\n", *(wsk(4, tab1, tab2)+1));
    printf("%d\n", *(wsk(4, tab1, tab2)+2));
    printf("%d\n", *(wsk(4, tab1, tab2)+3));
    printf("%d\n", *(wsk(4, tab1, tab2)+4));
    printf("%d\n", *(wsk(4, tab1, tab2)+5));
    printf("%d\n", *(wsk(4, tab1, tab2)+6));
    printf("%d\n", *(wsk(4, tab1, tab2)+7));
    return 0;
}
