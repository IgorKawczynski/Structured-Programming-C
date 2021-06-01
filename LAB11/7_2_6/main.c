#include <stdio.h>
#include <stdlib.h>

struct punktn{

    double *tab;
    int wymiar;

};

void przepisz(struct punktn tab1[], struct punktn tab2[], unsigned int n)
{
    for(int i=0; i<n; i++)
    {
        tab2[i].tab=malloc(tab1[i].wymiar*sizeof(double));
        for(int j=0; j<tab1[i].wymiar; j++)
        {
            tab2[i].tab[j] = tab1[i].tab[j];
        }
    }
}

int main()
{
    int n=3;
    struct punktn PKT1;
    PKT1.tab=malloc(n*sizeof(double));
    PKT1.tab[0]=3;
    PKT1.tab[1]=4;
    PKT1.tab[2]=7;

    struct punktn PKT2;
    PKT2.tab=malloc(n*sizeof(double));
    PKT2.tab[0]=24;
    PKT2.tab[1]=56;
    PKT2.tab[2]=-23;

    for(int i=0; i<n; i++)
    {
        printf("%lf  ", PKT1.tab[i]);
    }
        for(int i=0; i<n; i++)
    {
        printf("%lf  ", PKT2.tab[i]);
    }
    przepisz(PKT1.tab, PKT2.tab, n);
    for(int i=0; i<n; i++)
    {
        printf("%lf  ", PKT2.tab[i]);
    }
    return 0;
}
