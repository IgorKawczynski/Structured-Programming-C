#include <stdio.h>
#include <stdlib.h>

struct punkt{

    double p1;
    double p2;
    double p3;
};

void foo(struct punkt tab1[], struct punkt tab2[], unsigned int n){

    for(int i=0; i<n; i++)
    {
        *(tab2+i)=*(tab1+i);
    }

}


void wyswietl(struct punkt tab[], unsigned int n){

    for(int i=0; i<n; i++)
    {
        printf("(%lf, %lf, %lf)\n", tab[i].p1, tab[i].p2, tab[i].p3);
    }


}

int main()
{
    struct punkt P1={4, 5, 8};
    struct punkt P2={3, 2, 6};
    struct punkt P3={1, 3, 7};
    struct punkt P4={24, 6, 4};
    struct punkt P5={8, 9, 2};
    struct punkt Tab1[5]={P1, P2, P3, P4, P5};
    struct punkt Tab2[5]={P3, P1, P2, P5, P4};
    printf("        Tab1: \n");
    wyswietl(Tab1, 5);
    printf("        Tab2: \n");
    wyswietl(Tab2, 5);
    printf("    Tab2 po przepisaniu elementow z Tab1: \n");
    foo(Tab1, Tab2, 5);
    wyswietl(Tab2, 5);
    return 0;
}
