#include <stdio.h>
#include <stdlib.h>

int pierwiastek(unsigned int n){

    int wynik;
    if(n>0)
    {
        for(int i=0; i*i<=n; i++)
        {
            wynik=i;
        }

    }
    return wynik;

}

int main()
{


    printf("%d", pierwiastek(144));
    return 0;
}
