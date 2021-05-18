#include <stdio.h>
#include <stdlib.h>

struct punkt{

    double p1;
    double p2;
    double p3;
};

double min_distance(struct punkt tab[], unsigned int n){

    double temp;
    double min=sqrt(pow((tab[0].p1-tab[1].p1), 2)+pow((tab[1].p2-tab[0].p2), 2)+pow((tab[1].p3-tab[0].p3), 2));
    for(int i=0; i<n-1; i++)
    {
        for(int j=i; j<n; j++)
        {
            temp=sqrt(pow((tab[j].p1-tab[i].p1), 2)+pow((tab[j].p2-tab[i].p2), 2)+pow((tab[j].p3-tab[i].p3), 2));
        }
    }
    if(temp>min)
    {
        min=temp;
    }
    return min;
}


int main()
{
    struct punkt P1={4, 5, 8};
    struct punkt P2={3, 2, 6};
    struct punkt P3={1, 3, 7};
    struct punkt P4={24, 6, 4};
    struct punkt P5={8, 9, 2};
    struct punkt Tab1[5]={P1, P2, P3, P4, P5};
    printf("Najmniejsza odleglosc miedzy punktami to : %lf\n", min_distance(Tab1, 5));
    return 0;
}
