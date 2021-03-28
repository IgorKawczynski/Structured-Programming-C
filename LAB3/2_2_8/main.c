#include <stdio.h>
#include <stdlib.h>


int pierwiastek_kwadrat(int n){
int wynik=0;
for(int i=1;i*i<=n;i++){

wynik=i;

}
return wynik;
}


int main()
{
     int x;
    scanf("%d", &x);
    printf("%d", pierwiastek_kwadrat(x));
    return 0;
}
