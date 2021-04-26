#include <stdio.h>
#include <stdlib.h>

int Eratostenes(int n){
    int tab[n];
    int i;
    int j;
    int maks;

    for(i=0;i<n;i++)
        tab[i]=1;

    for(i=2;i<n;i++)
    {
        //wszystkie liczby pierwsze do n + najwieksza liczba pierwsza z tego zbioru ( maks = ostatnia liczba w tablicy bêd¹ca tym samym najwiêksz¹ )
        if(tab[i]==1)
            {
                for(j=i*i;j<=n;j=j+i)
                    tab[j]=0;
                    maks=i;
            }
    }
    for(i=2;i<=n;i++)
    {
        if(tab[i]==1)
        {
            printf("%d, ", i);

        }
    }
    return maks;

}


int main()
{


    printf("%d\n", foo1(24));
    return 0;
}
