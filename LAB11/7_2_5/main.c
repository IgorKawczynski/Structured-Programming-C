#include <stdio.h>
#include <stdlib.h>

struct punkt10{

    double p[10];


};

void foo(struct punkt10 tab1[], struct punkt10 tab2[], unsigned int n){

    for(int i=0; i<n; i++)
    {
        *(tab2+i)=*(tab1+i);
    }

}


void wyswietl(struct punkt10 tab[], unsigned int n){


    for(int i=0; i<n; i++)
    {
        printf("(");
        for(int j=0; j<10; j++)
        {
            printf(" %lf, ", tab[i].p[j]);
        }
        printf(")\n");
    }

}

int main()
{
    /////////////////////////////ZLE
//    struct punkt10 P1={4, 5, 8, 4, 3, 2, 1, 2, 6, 9};
//    struct punkt10 P2={3, 2, 6, 1, 2, 6, -4, 1, 3, 4};
//    struct punkt10 P3={1, 3, 7, 21, -54, 204, 1, 4, 5, 0};
//    struct punkt10 P4={24, 6, 4, 0, 0, 6, 28, 1, 4, 6};
//    struct punkt10 P5={8, 9, 2, 21, 9, 0, 106, 204, -54, 27};

    struct punkt10 P1={{4, 5, 8, 4, 3, 2, 1, 2, 6, 9}};
    struct punkt10 P2={{3, 2, 6, 1, 2, 6, -4, 1, 3, 4}};
    struct punkt10 P3={{1, 3, 7, 21, -54, 204, 1, 4, 5, 0}};
    struct punkt10 P4={{24, 6, 4, 0, 0, 6, 28, 1, 4, 6}};
    struct punkt10 P5={{8, 9, 2, 21, 9, 0, 106, 204, -54, 27}};
    struct punkt10 Tab1[5]={P1, P2, P3, P4, P5};
    struct punkt10 Tab2[5]={P3, P1, P2, P5, P4};

    printf("Tab1: \n");
    wyswietl(Tab1, 5);
    printf("Tab2: \n");
    wyswietl(Tab2, 5);
    printf("Tab2 po przepisaniu elementow z Tab1: \n");
    foo(Tab1, Tab2, 5);
    wyswietl(Tab2, 5);
    return 0;
}
