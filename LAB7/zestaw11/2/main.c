#include <stdio.h>
#include <stdlib.h>

int suma_n_nieparzystych(unsigned int n){

    int wynik=0;
    for(int i=0;i<n;i++)
    {
       if(i%2!=0)
            wynik=wynik+i;


    }
    return wynik;
}


int main()
{



    printf("%d\n", suma_n_nieparzystych(1));
    printf("%d\n", suma_n_nieparzystych(5));
    printf("%d\n", suma_n_nieparzystych(12));
    return 0;
}
