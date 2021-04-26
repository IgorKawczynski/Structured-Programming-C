#include <stdio.h>
#include <stdlib.h>

int szukaj(unsigned int n){

    if(n>2)
    {
        for(int k=n-1; k<n; k--)
        {
           if(n%k==0)
                return k;

        }
    }



}


int main()
{
    int n;
    scanf("%d", &n);

    printf("Wyszukana z n : %d\n", szukaj(n));
    printf("Hello world!\n");

    return 0;
}
