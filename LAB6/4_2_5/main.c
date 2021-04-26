#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Eratostenes(int n){
    int tab[n];
    int i;
    int j;
    int maks;
    for(i=0;i<n;i++)tab[i]=1;
    for(i=2;i<n;i++)
    {
        //wszystkie liczby pierwsze do n + najwieksza liczba pierwsza z tego zbioru ( maks = ostatnia liczba w tablicy bêd¹ca tym samym najwiêksz¹ )
        if(tab[i]==1)
            {
            for(j=i*i;j<=n;j=j+i)tab[j]=0;
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
    int n=26;
    int tab[n];
    printf("%d", Eratostenes(n));


    return 0;
}
































//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//void Eratostenes(int n){
//    int tab[n];
//    int y = 0;
//    // wypelnienie tablicy zakresem od 2 do n
//    if(n>=3){
//    for(int i=1; i<=n; i++)tab[i]=1;
//    for(int i=2;i*i<=n;i++)
//    {
//        if(tab[i]==0)continue;
//        for(y=i+i; y<=n; y = y + i)tab[y]=0;
//    }
//  }
//    int max=tab[0];
//    for(int i=2; i<=n; i++)if(tab[i]!=0)
//
//    for(int i=0; i<n; i++){
//            if(tab[i]>max)
//            {
//                max=tab[i];
//            }
//    }
//
//        printf("%d, ", max);
//}
//
//
//int main()
//{
//    int n = 15;
//    int tab[n];
//    Eratostenes(n);
//    return 0;
//}
