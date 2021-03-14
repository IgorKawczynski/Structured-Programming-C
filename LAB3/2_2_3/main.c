#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int najwiekszy_dzielnik(int n){

if(n>2)
for(int i=n-1;i<n;--i){
    if(n%i==0)return i;
}

}



int main()
{


int x;
scanf("%d", &x);
printf("Najwiekszy dzielnik podanej liczby bedacy mniejszy od tej liczby to : %d", najwiekszy_dzielnik(x) );



    return 0;
}





/*


unsigned int najwiekszy_nietrywialny_dzielnik(unsigned int n){

    int k=n;
if(n>2) {
        if(n%k==0) {
        for(int i=n; i<n; i--){
                k=i;

        }
        return k;
}

}

}


int main()
{


unsigned int x;
scanf("Podaj liczbe: %u", &x);
printf("Najwiekszy nietrywialny dzielnik podanej liczby to: %u", najwiekszy_nietrywialny_dzielnik(x) );



    return 0;
}


*/




